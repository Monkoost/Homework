
#include <iostream>
#include <vector>

template<typename T>
T recursive_max(std::vector<T>& v, int index)
{
    if (index == v.size() - 1)
    {
        return v[index];
    }
    else
    {
        T max_in_rest = recursive_max(v, index + 1);

        if (v[index] > max_in_rest) {
            return v[index];
        }
        else
        {
            return max_in_rest;
        }
    }
};

template<typename T>
int recursive_count(std::vector<T>& v, T value, int index) {
    if (index == v.size()) {
        return 0;
    }

    if (v[index] == value) {
        return 1 + recursive_count(v, value, index + 1);
    }
    else {
        return recursive_count(v, value, index + 1);
    }
}





int main()
{
    std::vector<int> v1{ 3, 7, 2, 9, 3 };
	
    std::cout << recursive_max(v1, 0);

    std::cout << "Кількість трійок: " << recursive_count(v1, 3, 0) << std::endl;

}

 