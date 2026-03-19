#include <iostream>
#include <cassert>

struct int_vector {
    int* data;
    int size;
    int capacity;

    int_vector(int initial_capacity = 4) {
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
    void erase(int index) {

        for (int i = index; i <= size;i++) {

            data[i] = data[i + 1];

        }
        resize(size);
        size--;
    }

    void unique() {
        while (i <= size)
        {
            if (data[i] == data[i + 1])
            {
                erase(i);
            }
            else
            {
                i++;
            }
        }
    }
};

int main() {
    int_vector v(2);

    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.print(); // [10, 20, 30, 40, 50, 60, 70, 80] (size=8, capacity=8)

    v.unique();

    v.print(); // [10, 20, 30, 999, 50, 60, 70, 80] (size=8, capacity=8)

    return 0;
}
