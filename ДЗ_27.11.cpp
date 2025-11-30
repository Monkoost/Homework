
#include <iostream>

int main()
{
	int engthRhombus;
std::cin>> engthRhombus;
int x = engthRhombus / 2;
	for (int i = 1;i <= engthRhombus; i++)
	{
		for (int j = 1;j <= engthRhombus; j++)
		{
			if (std::abs(x) + 1 <=j && j <= engthRhombus - std::abs(x))
			{
				std::cout << " *";
			}
			else
				std::cout << " -"; 
			
		}
		std::cout << "\n";
		x--;
   }
}
