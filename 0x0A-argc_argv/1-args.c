#include <stdio.h>
/**
 * main - This program will print the number of the arguments
 * passed into it.
 * and the program should print a number followed by a newline
 *
 * @argc: This will be the argument count.
 * @argv: This will be the argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__))  *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
