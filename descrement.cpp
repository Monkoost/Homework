#include<iostream>
#include<cmath>

int main()
{
int a,b,c;

std::cout<<"enter a b and c"<<'\n';
std::cin>>a>>b>>c;


float d;
float x_1, x_2;

d = b*b- 4*a*c;

if(d<0)
{
std::cout<<"ERROR";
}
else
{
b = b * -1;

x_1 = (b-sqrt(d)) / (2*a);
x_2 = (b+sqrt(d)) / (2*a);

std::cout<<x_1<<" "<<x_2;
}

}
