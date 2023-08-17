#include "main.h"
/**
 * print_numbers - This will function will print the numbers from 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{

	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
