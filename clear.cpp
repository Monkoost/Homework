#include <iostream>
#include <cassert>

struct int_vector {
    int* data;
    int size;
    int capacity;

    int_vector(int initial_capacity) {
        data = new int[initial_capacity];
        size = 0;
        capacity = initial_capacity;
    }

    ~int_vector() {
        delete[] data;
    }

    void resize(int new_capacity) {
        int* new_data = new int[new_capacity];
        int to_copy = (size < new_capacity) ? size : new_capacity;
        for (int i = 0; i < to_copy; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
        size = to_copy;
    }

    void push_back(int value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size] = value;
        ++size;
    }

    int& at(int index) {
        assert(index >= 0 && index < size);
        return data[index];
    }

    int& operator[](int index) {
        return at(index);
    }

    void print() {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            if (i > 0) std::cout << ", ";
            std::cout << data[i];
        }
        std::cout << "] (size=" << size
            << ", capacity=" << capacity << ")" << std::endl;
    }

    void clear() {
        int* new_data = new int[capacity];
        size = 0;
        data = new_data;
    }

};

int main() {
    int_vector v(1);

    for (int i = 1; i <= 13; ++i) {
        v.push_back(i * 10);
    }
    v.print();

    v.clear();

    v.print();

    return 0;
}
