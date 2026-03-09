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

    void insert(int index, int value) {
        resize(size + 2);
        size++;
        int temp1 = data[index];
        data[index] = value;
        int temp = 0;
        for (int i = index+1; i <= size;i++) {
            temp = data[i];
            data[i] = temp1;
            temp1 = temp;
        }
    }
    void erase(int index, int value) {
    
        for (int i = index + 1; i <= size;i++) {
           
            data[i] = data[i+1];
           
        }
        resize(size - 1);
        size--;
    }

};
        int main() {
            int_vector v(1);

            for (int i = 1; i <= 13; ++i) {
                v.push_back(i * 10);
            }
            

            return 0;
        }