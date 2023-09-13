#include "3-calc.h"
/**
 * main - This function will program that perfroms simple operations
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	k = *argv[2];

	if ((k == '/' || k == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(arg1, arg2);

	printf("%d\n", res);

	return (0);
}
