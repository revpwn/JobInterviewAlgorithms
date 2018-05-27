#include <iostream>

// prototype
void fizz_buzz(int);

int main()
{
	for (int i = 1; i <= 100; i++)
		fizz_buzz(i);
	return 0;
}

void fizz_buzz(int n)
{
	if (n % 15 == 0)
	{
		std::cout << "FIZZBUZZ" << std::endl;
	}
	else if (n % 3 == 0)
	{
		std::cout << "FIZZ" << std::endl;
	}
	else if (n % 5 == 0)
	{
		std::cout << "BUZZ" << std::endl;
	}
	else
	{
		std::cout << n << std::endl;
	}
}