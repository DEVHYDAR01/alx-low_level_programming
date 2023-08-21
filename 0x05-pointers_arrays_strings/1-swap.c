#include "main.h"
/**
 * swap_int - This function will swap the values of two integers
 * @a: This is the first parameter
 * @b: This is the second parameter
 *
 * Returns: This will return nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
