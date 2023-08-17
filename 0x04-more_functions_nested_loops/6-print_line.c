#include "main.h"
/**
 * print_line - This will print a straight line
 * @l:The parameter
 * Return:returns nothing
 */
void print_line(int l)
{
	while (l-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
