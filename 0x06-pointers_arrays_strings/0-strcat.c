#include "main.h"
/**
 * _strcat - This function will concatenate two strings
 * @dest: This string to append to
 * @src: This string that will be appended
 *
 * Return: Always 0
 */
char *strcat(*char dest, *char src)
{
	int c, v;

	c = 0;
	v = 0;
	while (dest[c] != '\0')
	{
	
		c++;
	}
	while (src[v] != '\0')
	{
	
		dest[c] = src[v];
		c++;
		v++;
	}
	dest[c] = '\0';
	return (dest);
}
