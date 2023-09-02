#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program will multiply two numbers
 *
 * @argc: This will be the count argument
 * @argv: This will be the vector argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number1, number2, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	res = number1 * number2;
	printf("%d\n", res);

	return (0);

}
