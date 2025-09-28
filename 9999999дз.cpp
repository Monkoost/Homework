

#include <iostream>

int main()
{
    int mas[6];
    int sumTicket=0;
    for (int i=0;i<=999999;i++)
    {
        int temp = i;
        for (int j = 5;j >= 0;j--)
        {
            mas[j] = temp % 10;
            temp /= 10;
        }
        int sum1 = mas[0] + mas[1] + mas[2];
        int sum2 = mas[3] + mas[4] + mas[5];
        if (sum1 == sum2)
        {
            sumTicket++;
        }

    }
    std::cout << sumTicket;
}

