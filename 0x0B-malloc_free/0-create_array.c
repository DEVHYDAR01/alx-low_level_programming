#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - This function will create an array of chars,
 * and initializes it with a specific char.
 * @size: size to be allocated
 * @c: The type.
 *
 * Return: return pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (n < size)
	{
		s[n] = c;
		n++;
	}
	s[n] = '\0';
	return (s);

}
