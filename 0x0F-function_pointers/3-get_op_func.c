#include "3-calc.h"
/**
 * get_op_func - This function pointer will select
 * the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int fun;

	fun = 0;

	while (ops[fun].op)
	{
		if (strcmp(ops[fun].op, s) == 0)
			return (ops[fun].f);
		fun++;
	}

	return (NULL);
}
