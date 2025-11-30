#include<iostream>

int main()
{
	int height;
	int length;
	std::cout <<"height,length ";
	std::cin >> height, length;

for(int i = 1; i <= length * height; i++)
{
	if(i == length * height)
	{
	std::cout<<i;
	break;
	}

	else if(i % length == 0)
	{
		std::cout<<i<<'\n';
		int g = i + length;

		for(int j = 0; j < length; j++)
		{
		std::cout<<g - j<<" ";
		}

	i = i + length;
	std::cout<<'\n';
	}

	else
	{
	std::cout<<i<<" ";

}




}




}
