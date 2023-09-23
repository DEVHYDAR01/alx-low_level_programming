#include <stdio.h>
/**
 * first - This function will print a message of the constructor.
 * Return: This will return nothing.
 */
void constructor(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
