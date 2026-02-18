// Task2Product.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

typedef struct {
    std::string nameProduct;
    float priseProduct;
    int numberProduct;
}Product;

int main()
{
    Product apple;
    std::cout << "\nenter name product: " << std::endl;
    std::cin >> apple.nameProduct;
    std::cout << "\nenter prise product: " << std::endl;
    std::cin >> apple.priseProduct;
    std::cout << "\nenter number product: " << std::endl;
    std::cin >> apple.numberProduct;

    std::cout << "\nTotal: " << apple.priseProduct * apple.numberProduct << " UAH" << std::endl;


}


