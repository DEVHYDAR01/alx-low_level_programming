#include "main.h"
/**
 * print_square - prints squares
 * @size: parameter
 * Return:returns nothing
 */
void print_square(int size)
{
	int ink1, ink2;
	if (size > 0)
	{
		for (ink1 = 0; ink1 < size; ink1++)
		{
			for (ink2 = 0; ink2 < (size - 1); ink2++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
