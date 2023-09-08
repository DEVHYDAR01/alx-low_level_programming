#include "main.h"
#include <stdlib.h>
/**
 * array_range - This function will create an array of integers.
 * @min: This is the minimum value.
 * @max: This is the maximum value.
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int s;
	int *point;
	int diff = 0;

	if (min > max)
	{
		return (NULL);
	}
	diff = ((max + 1) - min);

	point = malloc(diff * sizeof(int));

	if (point == NULL)
	{
		return (NULL);
	}
	s = 0;
	while (s < diff)
	{
		*(point + s) = min + s;
		s++;
	}
	return (point);
}
