// Task11ListOfStudents.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


typedef struct{
    std::string nameStudent;
    int gradeStudent;
}Student;

int main()
{
    Student StudentMas[3];

    for (int i=0; i < 3;i++)
    {
        std::cout << "enter name student"<<i+1<<": ";
        std::cin >> StudentMas[i].nameStudent;
        std::cout << "enter grade student: ";
        std::cin >> StudentMas[i].gradeStudent;
    }
    for (int i = 0; i < 3;i++)
    {
        std::cout <<i+1<<" "<< StudentMas[i].nameStudent<<" - "<<StudentMas[i].gradeStudent<<std::endl;
        
    }
    
}


