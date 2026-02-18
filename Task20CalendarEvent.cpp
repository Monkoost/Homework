// Task20CalendarEvent.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

typedef struct {
    int day;
    int month;
    int year;
}date;

typedef struct {
    int hours;
    int minutes;
}time1;

typedef struct {
    char nameEvent[50];
    date  dateName;
    time1 timeEvent;
} event1;



int main()
{
    event1 e = {
        "BOBO",
        {12, 2, 1543},
        {16, 45}
    };

    std::cout << "Event:\n"
        << e.nameEvent << "\n"
        << e.dateName.day << "."
        << e.dateName.month << "."
        << e.dateName.year << " at "
        << e.timeEvent.hours << ":"
        << e.timeEvent.minutes << "\n";
}
