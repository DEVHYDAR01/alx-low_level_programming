#include "main.h"
/**
 * binary_to_uint - This function will convert
 * a binary number to an unsigned int.
 * @b: This is the pointer to a string that contains a binary number
 *
 * Return: unsigned int with decimal
 * value of binsry number, or 0 if error is return
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int digit;

	digit = 0;
	if (!b)
		return (0);
	k = 0;
	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		k++;
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		digit <<= 1;
		if (b[k] == '1')
			digit = digit + 1;
	}
	return (digit);
}
