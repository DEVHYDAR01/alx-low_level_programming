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

	int q = 0;

	while (str[q] != '\0')
	{
		_putchar(str[q]);
	}

}
