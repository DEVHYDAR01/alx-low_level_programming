#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 * 
 * Return: Always 0 (Succes)
 */

int main(void)
{               
	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d ispositive\n", n);
	else if (n == 0) 
		printf("%d iszero\n", n);
	else
		printf("%d isnegative\n", n);
	return (0);
}
