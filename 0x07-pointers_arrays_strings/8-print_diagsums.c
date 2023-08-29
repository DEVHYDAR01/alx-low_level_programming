#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - This function will print the sum of the two diagonals
 * @a: This will be the first value char
 * @size: This will be the second value int
*/
void print_diagsums(int *a, int size)
{
	int iter, j, cal_1 = 0, cal_2 = 0, d, l = 0;

	d = size - 1;
	for (iter = 0; iter < size; iter++)
	{
		for (j = 0; j < size; j++)
		{
			if (iter == j)
				cal_1 += a[l];
			if (j == d)
				cal_2 += a[l];
			l++;
		}
		d--;
	}
	printf("%i, %i\n", cal_1, cal_2);
}
