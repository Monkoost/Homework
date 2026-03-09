#include <iostream>
#include <cassert>

struct int_vector {
    char* data;
    int size;
    int capacity;

    int_vector(int initial_capacity = 4) {
        data = new char[initial_capacity];
        size = 0;
        capacity = initial_capacity;
    }

    ~int_vector() {
        delete[] data;
    }

    void resize(int new_capacity) {
        char* new_data = new char[new_capacity];
        int to_copy = (size < new_capacity) ? size : new_capacity;
        for (int i = 0; i < to_copy; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
        size = to_copy;
    }

    void push_back(char value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size] = value;
        ++size;
    }

    char& at(int index) {
        assert(index >= 0 && index < size);
        return data[index];
    }

    char& operator[](int index) {
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
};

int main() {
    int_vector v(2);
    v.push_back('h');
    v.push_back('e');
    v.push_back('l');
    v.push_back('l');
    v.print(); // [10, 20, 30, 40, 50, 60, 70, 80] (size=8, capacity=8)

   
    v.print(); // [10, 20, 30, 999, 50, 60, 70, 80] (size=8, capacity=8)

    return 0;
}