nclude "main.h"
/**
 * print_triangle - This will print a triangle
 * @size:size is the parameter
 * Return:returns nothing
 */
void print_triangle(int size)
{
	int j, d;

	if (size > 0)
	{
		for (j = 0; j <= size; j++)
		{
			for ((d = size - d); d > 0; d--)
				_putchar(' ');
			for (d = 0; d < j; d++)
				_putchar('#');
			if (j == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
