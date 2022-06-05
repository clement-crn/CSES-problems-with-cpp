/* Consider an algorithm that takes as input a positive integer n
. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, unti
n is one */

#include <iostream>

int main()
{
	long int n = 0;
	std::cin >> n;

	std::cout << n;
	std::cout << " ";	
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n/2;
			std::cout << n;
			std::cout << " ";
		}
		else
		{
			n = n * 3 + 1;
			std::cout << n;
			std::cout << " ";
 
		}
		if (n == -2 ||n == -1)
		{
		n = n + 4;
		std::cout << n;
		std::cout << " ";
		}
	}
return 0;
}
