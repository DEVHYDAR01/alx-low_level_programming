#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer it is compiled 
 * and ran it
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
