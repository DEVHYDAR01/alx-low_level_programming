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
 * _strdup - This function that returns a pointer to a newly
 * allocated space in memory,which contains a copy of the
 * string given as a parameter.
 * @str: pointer to string array duplicate
 * Return: pointer to string newly created.
 */
char *_strdup(char *str)
{
	char *p;
	int space;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	space = _strlen(str);
	p = (char *)malloc((space + 1) * sizeof(char));

	for (j = 0; j < space + 1; j++)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p[j] = str[j];
	}
	return (p);
}
