#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This variadic function will return the sum of
 * all its parameters
 * @n: The first const argument
 *
 * Return: This will return the parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	if (n == 0)
	{
		return 0;
	}
	va_list numbers;
	unsigned int adder;
	int total;

	total = 0;

	va_start(numbers, n);

	adder = 0;
	while (adder < n)
	{
		total = total + va_arg(numbers, int);
		adder++;
	}
	va_end(numbers);
	return (total);
}
