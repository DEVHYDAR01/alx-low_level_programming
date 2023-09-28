#include"main.h"
/**
 * get_bit - This function is going to return
 * the value of a bit at a given index.
 * @n: This is the number to check bits at
 * @index: This is the index at which to check bit
 *
 * Return: value of the bit, or -1
 * if there is an error is returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int separator, verify;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	separator = 1 << index;
	verify = n & separator;
	if (verify == separator)
		return (1);
	return (0);
}
