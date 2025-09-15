#include <iostream>
#include <locale>
int main()
{
int min, max, sum=0, i;
	std::cin>>min;
	std::cin>>max;
i=min;
for(i; i<=max;i++)
{
if(i % 2 == 0)
{
sum=sum+i;
}
}
std::cout<<sum;
}
