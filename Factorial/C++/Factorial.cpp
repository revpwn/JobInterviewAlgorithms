#include <iostream>

using namespace std;

// iterative version
int factorial_iter(int num)
{
	int total = 1;
	for (int i = num; i > 1; i--)
	{
		total *= i;
	}
	return total;
}

// recursively version
int factorial_rec(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial_rec(num - 1);
	}
}

// Test program
int main()
{

	cout << "iter 0! = " << factorial_iter(0) << endl;
	cout << "iter 5! = " << factorial_iter(5) << endl;
	cout << "rec 0! = " << factorial_rec(0) << endl;
	cout << "rec 5! = " << factorial_rec(5) << endl;

	return 0;
}