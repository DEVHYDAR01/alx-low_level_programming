#include "function_pointers.h"
/**
 * int_index - This function will search for an integer
 * @array: This array will search for int
 * @size: This will be the size of the array
 * @cmp: This is the pointer to the comparing function
 *
 * Return: The index of the first element for which
 * the cmp function will not return 0 or -1 if there is no match found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int dex;

	if (array && cmp)
	{
		dex = 0;
		while (dex < size)
		{
			if (cmp(array[dex]) != 0)
			{
				return (dex);
			}
		}
	}

	return (-1);
}
