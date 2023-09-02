#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program will prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: The number of arguments count to the program.
 * @argv: An array of pointers and vector to the arguments.
 *
 * Return: 1 If the number of arguments is not exactly one.
 * else - 0.
 */
int main(int argc, char *argv[])
{
	int cen, coi = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[1]);

	while (cen > 0)
	{
		coi++;
		if ((cen - 25) >= 0)
		{
			cen = cen - 25;
			continue;
		}
		if ((cen - 10) >= 0)
		{
			cen = cen - 10;
			continue;
		}
		if ((cen - 5) >= 0)
		{
		cen = cen - 5;
		continue;
		}
		if ((cen - 2) >= 0)
		{
			cen = cen - 2;
			continue;
		}
		cen--;
	}
	printf("%d\n", coi);

	return (0);
}
