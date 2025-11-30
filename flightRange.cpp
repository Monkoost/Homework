#include<iostream>
#include<cmath>

int main()
{
float v, a, l;

std::cout<<"enter v and a"<<'\n';
std::cin>>v>>a;

const float g = 9.8;

l = (v*v) * sin(2 * a) / g;

std::cout<<std::abs(l);
}
