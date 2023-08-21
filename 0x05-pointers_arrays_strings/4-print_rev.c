#include "main.h"
/**
 * print_rev - This function will print a string in reverse with a newline
 * @s: This is the parameter
 *
 * Return: This function will return nothing
 */
void print_rev(char *s)
{
	int l, k, rev;

	for (l = 0; s[l] !='\0'; l++)
	{
		_putchar(l);
	}

	rev = l;

	for (k = rev - 1; k >= 0; k--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
