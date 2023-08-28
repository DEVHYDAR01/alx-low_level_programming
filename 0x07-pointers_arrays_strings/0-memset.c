#include "main.h"
/**
 * _memset - This function will fill a memory with a constant byte
 * @s:This pointer will start of the the memory region to set
 * @n:This will be the byte value to which you want to set
 * @b:The number of byte to set
 *
 * Return: This will return a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;

	while (g < n)
	{
		s[g] = b;
		g++;
	}
	return (s);
}
