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
	unsigned int k;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	k = 0;
	while (format && format[k])
	{
		switch (format[k])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				k++;
				continue;
		}
		separator = ", ";
		k++;
	}

	printf("\n");
	va_end(args);
}
