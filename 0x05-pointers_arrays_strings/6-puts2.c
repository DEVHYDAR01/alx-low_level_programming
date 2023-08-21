#include "main.h"
/**
 * puts2 - This function will print every other character of
 * a string starting with the first character and a newline
 * @str: The parameter to work with
 *
 * Return: This will return nothing
 */
void puts2(char *str)
{
	int lenx, b;

	lenx = 0;

	while (str[lenx] != '\0')
	{
		lenx++;
	}
	for (b = 0; b < lenx; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
