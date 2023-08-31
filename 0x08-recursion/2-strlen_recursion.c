#include "main.h"

/**
 * _strlen_recursion - This function will print a string in reverse
 * @s: This will be the first value
 *
 * Return: It will return the solution
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
