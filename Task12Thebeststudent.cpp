#include <iostream>


typedef struct {
    std::string nameStudent;
    int gradeStudent;
}Student;

int main()
{
    Student StudentMas[3];
    int min;

    for (int i = 0; i < 3;i++)
    {
        std::cout << "enter name student" << i + 1 << ": ";
        std::cin >> StudentMas[i].nameStudent;
        std::cout << "enter grade student: ";
        std::cin >> StudentMas[i].gradeStudent;
    }
    int max = StudentMas[0].gradeStudent;
    std::string bestStudent;
    for (int i = 0; i < 3;i++)
    {
        min = StudentMas[i+1].gradeStudent;
        if (min>max) 
        {
            max = StudentMas[i + 1].gradeStudent;
            bestStudent = StudentMas[i + 1].nameStudent;
        }
        

    }
    std::cout << bestStudent << " - " << max << std::endl;

}