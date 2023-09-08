#include <stdlib.h>
#include "main.h"

/**
 * _realloc - This function will reallocate a memory block
 * using malloc and free
 * @ptr: The pointer will point to the memory
 * previsouly allocated by malloc
 * @old_size: This will be the size of the allocated memory for ptr
 * @new_size: This is the newly size of the new memory block
 *
 * Return: This pointer will be returned to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point1;
	char *aged_ptr;
	unsigned int l;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	point1 = malloc(new_size);
	if (!point1)
	{
		return (NULL);
	}
	aged_ptr = ptr;
	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
		{
			point1[l] = aged_ptr[l];
		}
	}
	if (new_size > old_size)
	{
		l = 0;
		while (l < old_size)
			point1[l] = aged_ptr[l];
			l++;
	}
	free(ptr);
	return (point1);
}
