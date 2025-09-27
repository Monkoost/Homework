#include <iostream>

int main()
{
 
    const char* x = "nigger";
    int i = 0;
    while (x[i]!='\0')
    {
        i++;
        std::cout << x[i-1];
    }
    std::cout <<" len: "<< i;
}

