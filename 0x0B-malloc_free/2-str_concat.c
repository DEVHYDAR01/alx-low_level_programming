#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - This funtion will determine the lenght of a string
 * @s: the type.
 *
 * Return: This will return the length of the string.
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (k[s] != '\0')
	{
		k++;
	}
	return (k);
}
/**
 * _strncat - This function will concatenate two strings
 * @dest:This string to concatenate to
 * @src: The string to be appended
 * @n: The n bytes
 *
 * Return: Alway 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, g;

	dest_len = _strlen(dest);
	for (g = 0; g < n && src[g] != '\0'; g++)
	{
		dest[dest_len + g] = src[g];
	}
	return (dest);
}
/**
 * *str_concat - This function will allocate space for string concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int space1, space2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	space1 = _strlen(s1);
	space2 = _strlen(s2);

	p = (char *) malloc((space1 + space2) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	_strncat(p, s1, space1);
	_strncat(p, s2, space2);
	p += '\0';
	return (p);
}
