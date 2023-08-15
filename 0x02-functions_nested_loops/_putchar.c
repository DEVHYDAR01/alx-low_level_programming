#include <unistd.h>
/**
 * _putchar - This will write the charcter c to stdout of the _putchar
 *
 * @c : This is the character to print
 *
 * Return: 0n success 1.
 * On error, will return -1, and set appropriately.
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
