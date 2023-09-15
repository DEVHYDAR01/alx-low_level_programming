#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - This function will print numbers, followed by a new line.
 * @separator: This is the string to be printed between numbers *
 * @n: This is the number of integers passed to the function
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int adder;

	va_start(numbers, n);

	for (adder = 0; adder < n; adder++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (adder < (n - 1) && separator != NULL)
		{
			printf("s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
