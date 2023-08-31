#include "main.h"

/**
 * factorial - This function will return the factorial of a given number.
 * @n: This will be the value to obtain the factorial
 *
 * Return: Return solution
 */
int factorial(int n)
{
	if (n <  0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
