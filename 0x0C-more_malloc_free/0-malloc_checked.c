#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - This is a function that will  allocate memory using malloc
 * and return pointer if fails will exit 98.
 * @b: unsigned int paramter.
 *
 * Return: This will return the pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);
	if (point == NULL)
	{
		exit(98);
	}
	return (pointer);
}
