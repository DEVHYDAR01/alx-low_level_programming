#include <stdio.h>
/**
 * Beginning - This function will be executed
 * which is a consturct before main
 * Return: There is no return for it.
 */
void __attribute__ ((constructor)) Beginning()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
