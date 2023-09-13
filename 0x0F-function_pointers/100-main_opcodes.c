#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function will print its own opcodes
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int byt, k;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (k = 0; k < byt; k++)
	{
		if (k == byt - 1)
		{
			printf("%02hhx\n", arr[k]);
			break;
		}
		printf("%02hhx ", arr[k]);
	}
	return (0);
}
