// Task4Time.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

typedef struct {
    int hour;
    int minutes;

} Time;

int main()
{
    Time t1;
    std::cout << "enter hour ";
    std::cin >> t1.hour;
    std::cout << "enter min ";
    std::cin >> t1.minutes;

    std::cout <<"sum time: "<<(t1.hour * 60 + t1.minutes)*60 << " sec\n";
}

