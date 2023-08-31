#include "main.h"
int calculo_primo(int num_, int inf);

/**
 * is_prime_number - The function will  returns 1 if the input integer is a prime.
 * @n: This is the first value
 *
 * Return: This will return the solution
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
		return (0);
	return (calculo_primo(n, a));
}

/**
 * calculo_primo - The function will return 1 if the input integer is a prime.
 * @num_: This is the first value
 * @inf: This is the second value
 *
 * Return: This will Return the solution
 */
int calculo_primo(int num_, int inf)
{
	if (num_ / 2 < inf)
	{
		return (1);
	}
	if (num_ % inf == 0)
		return (0);
	return (calculo_primo(num_, inf + 1));
}
