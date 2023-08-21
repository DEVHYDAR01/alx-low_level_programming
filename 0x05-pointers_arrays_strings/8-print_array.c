#include <stdio.h>
#include "main.h"

/**
 * print_array - This will prints n elements of array of integers
 * with a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		if (f == 0)
		printf("%d", a[f]);
	else
	{
	printf(", %d", a[f]);
	}
	printf("\n");
}
