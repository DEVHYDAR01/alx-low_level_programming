#include <stdio.h>
/**
 * main - This will prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int digit;

	while (digit++ < 100)

		if ((digit % 3 == 0) && (digit % 5 == 0))
			printf("FizzBuzz ");

		else if ((digit % 3) == 0)
			printf("Fizz ");

		else if ((digit % 5) == 0)
		{
			if (digit != 100)
				printf("Buzz ");

			else
				printf("Buzz");
		}

		else
			printf("%d ", num);

	printf("\n");
	return (0);
}
