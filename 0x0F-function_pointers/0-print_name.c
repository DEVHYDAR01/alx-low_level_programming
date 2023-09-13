#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - This function will print a name
 * @name: This is the name to be printed
 * @f: This will be the pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
