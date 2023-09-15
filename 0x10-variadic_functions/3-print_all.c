#include <stdio.h>
#include "variadic_functons.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - This function will print anything.
  *@format: This is the list of all arguments passed to the function.
  *
  *Return: void oh yeah pumped up for printf.
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *s, *divider;

	va_start(args, format);

	divider = "";

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", divider,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", divider, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", divider, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", divider, s);
				break;
			default:
				j++;
				continue;
		}
		divider = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
