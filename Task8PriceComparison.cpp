// Task8PriceComparison.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

typedef struct {
    std::string nameProduct;
    float priseProduct;
}Product;

int main()
{
    Product p[2];

    for (int i = 0; i < 2; i++)
    {
        std::cout << "enter name: ";
        std::cin >> p[i].nameProduct;
        std::cout << "enter prise: ";
        std::cin >> p[i].priseProduct;
    }

    float min = p[0].priseProduct;
    float max = p[1].priseProduct;

    if (min < max)
    {
        std::cout << max;
    }
    else 
    {
        std::cout << min;
    }
}