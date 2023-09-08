#include "main.h"
#include <stdlib.h>
/**
 * _strlen - This function will calculate and return the length of a string.
 * @string: The string to return
 * Return: The length
 */
int _strlen(char *string)
{
	int f;

	for (f = 0; string[f] != '\0'; f++)
		;
	return (f);
}
/**
 * string_nconcat - This function concatenates s1 and n bytes of s2.
 * @s1: This the first string 1
 * @s2: This is the second string 2
 * @n: This will be the n bytes to concat from string 2
 * Return: pointer to concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	int num, len, k, l;

	num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	len = _strlen(s1) + num + 1;

	point = malloc(sizeof(*point) * len);
	if (point == NULL)
	{
	return (NULL);
	}
	k = 0;
	while (s1[k] != '\0')
	{
		point[k] = s1[k];
		k++;
	}
	for (l = 0; l < num; l++)
	point[k + l] = s2[l];
	point[k + l] = '\0';

	return (point);
}
