#include <iostream>

void intToCharArray(int number, char* result)
{
    
    char temp[12];
    int index=0;
    int resultIndex = 0;
    if (number == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return;
    }
    
    bool negativ = number < 0;
    if (negativ)
    {
        number = -number;
        result[0] = '-';
        resultIndex = 1;

    }
    while (number>0)
    {
        temp[index] = '0' + number % 10;
        ++index;
        number /= 10;
    }
    
    for (int i=0; index > i;++i)
    {
        result[i+ resultIndex] = temp[index- 1 - i];
    }
    result[index+ resultIndex] = '\0';
}
int main()
{
    int number = -623;
    char result[12];
    intToCharArray(number, result);
    std::cout << "Число " << number << " у вигляді рядка: " << result << std::endl;
    return 0;
}

