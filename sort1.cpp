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
    void sort() {
        bool danSort = true;
        while (danSort)
        {
            danSort = false;
            for (int i = 0; i < size-1;i++)
            {
                if (data[i] > data[i + 1])
                {
                    std::swap(data[i],data[i + 1]);
                    danSort = true;
                }
            }
            if (danSort==false) 
            {
                break;
            }
        }
    }
};

int main() {
    int_vector v(2);

    v.push_back(9);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    v.print(); 
    v.sort();

    v.print(); 


    return 0;
}