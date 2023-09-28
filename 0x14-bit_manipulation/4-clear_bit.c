#include "main.h"
/**
 * clear_bit - This function is going to set
 * the value of a bit to 0 at a given point
 * @n: This is the parameter
 * @index: The index at which to set
 * Return: 1 if works, -1 if error is returned
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
