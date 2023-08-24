#include "main.h"
/**
 * reverse_array - This function will reverse the content
 * of an array of integers
 * @a: This is the parameter of the array of integers
 * @n: The is the parameters of the integers to be swapped
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int arr, swap, hold;

	swap = n - 1;

	for (arr = 0; arr < n / 2; arr++)
	{
		hold = a[arr];
		a[arr] = a[swap];
		a[swap--] = hold;
	}
}
