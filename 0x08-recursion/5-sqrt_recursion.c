#include "main.h"
int _root_sqrt(int raiz, int cont);

/**
 * _sqrt_recursion - This function will return the natural square root of a number
 * @n: This will be the first value
 *
 * Return: This will return the solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}

/**
 * _root_sqrt - This funtion will calculate the square root
 * @raiz: This will be the value to calc the square root
 * @cont: This will be the variable to cont
 *
 * Return: the number with the solution
 */
int _root_sqrt(int raiz, int cont)
{
	if (cont * cont == raiz)
	{
		return (cont);
	}
	else if (cont * cont > raiz)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(raiz, cont + 1));
	}
}
