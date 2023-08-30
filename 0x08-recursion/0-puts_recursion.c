#include "main.h"
/**
 * _puts_recursion - This function will fill memory
 * with a kind of constant byte
 * @s: This is the first value
 *
 */
void _puts_recursion(char *s)
{

	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
