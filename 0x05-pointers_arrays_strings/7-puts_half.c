#include "main.h"

/**
 * puts_half - This function will print half input
 * followed by a new line
 * @str: This is the parameter to work with
 */
void puts_half(char *str)
{
	int lent, r, e;

	lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}
	if (lent % 2 == 0)
	{
		for (e = lent / 2; str[e] != '\0'; e++)
		{
			_putchar(str[e]);
		}
	}
	else if (lent % 2)
	{
		for (r = (lent - 1) / 2; r < lent - 1; r++)
		{
			_putchar(str[r + 1]);
		}
	}
	_putchar('\n');
}
