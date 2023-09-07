#include <stdlib.h>
#include "main.h"
/**
 * _calloc - This funtion will allocate memory of an array using malloc.
 * @nmemb: This is the number of elements in array.
 * @size: This will be thesize of elements of array.
 *
 * Return: NULL is size or nmemb == 0.
 * Pointer to memory allocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	point = malloc(nmemb * size);
	if (point == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (k < nmemb * size)
	{
		*((char *)(point) + k) = 0;
		k++;
	}

return (point);
}
