
#include <iostream>

typedef struct {
    int day;
    int month;
    int year;
}date;

typedef struct {
    char name[50];
    date birthday;
} student;

int main()
{
    student s = {
        "Mark",
        {11,03,2010}
    };

    std::cout<< s.name << " was born on " <<
        s.birthday.day << "." <<
        s.birthday.month << "." <<
        s.birthday.year << std::endl;
}

