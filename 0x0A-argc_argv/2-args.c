#include <stdio.h>
/**
 * main - This program will print all arguments it receives
 *
 * @argc: This will be the argument count
 * @argv: This will be the argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int par;

	for (par = 0; par < argc; par++)
	{
		printf("%s\n", argv[par]);
	}
	return (0);
}
