#include "main.h"
/**
 * get_endianness - This function check the endianness.
 *
 * Return: 0 if big endian, 1 if little endian is returned
 */
int get_endianness(void)
{
	int f;
	char *k;

	f = 1;
	k = (char *)&f;
	return (*k);
}
