#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int add = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int d;
			char *str;

			str = argv[i];
			for (d = 0; str[d] != '\0'; d++)
			{
				if (str[d] < 48 || str[d] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		add = add + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
