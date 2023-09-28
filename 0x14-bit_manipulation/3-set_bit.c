#include "main.h"
/**
 * set_bit - This function will set the value of a bit to 1 at a given place.
 * @n: This is the number to set
 * @index: This is index at which to set bit to.
 *
 * Return: 1 if it worked, or -1 if an error occurred is returned
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int initial;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	initial = 1 << index;
	*n = *n | initial;
	return (1);
}
