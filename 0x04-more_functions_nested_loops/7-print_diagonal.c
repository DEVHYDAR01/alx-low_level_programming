#include "main.h"
/**
 * print_diagonal - This will print a diagonal
 * @o:parameter
 * Return:returns nothing
 */
void print_diagonal(int o)
{
	int len, space;

	if (o > 0)
	{
		for (len = 0; len < o; len++)
		{
			for (space = 0; space < len; space++)
			_putchar(' ');
			_putchar('\\');
			if (len == (o - 1))
			continue;
			_putchar('\n');
		}
	}	
	_putchar('\n');
}
