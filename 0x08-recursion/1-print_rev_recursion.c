#include "main.h"

/**
 * _print_rev_recursion - This function will print a string in reverse
 * @s: This is the first value
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
