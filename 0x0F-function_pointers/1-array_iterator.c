#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - This function will execute a function given as a parameter
 * on each of the element of an array
 * @array: This is the array to iterate over
 * @size: This will be the size of the array
 * @action: This is the pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (!array || !action)
	{
		return;
	}

	l = 0;
	while (l < size)
	{
		action(array[l]);
		l++;
	}
}
