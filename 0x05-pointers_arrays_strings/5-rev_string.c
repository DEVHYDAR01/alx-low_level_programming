#include "main.h"
/**
 * rev_string - This will write a function that reverses a string
 * @s: The is the parameter
 *
 * Return: This will return nothing
 */
void rev_string(char *s)
{

	char hold;

	int g, lens, lenght;

	lens = 0;
	lenght = 0;

	while (s[lens] != '\0')
	{
		lens++;
	}

	lens = lenght - 1;
	for (g = 0; g < lens / 2; g++)
	{
		hold = s[g];
		s[g] = s[lenght];
		s[lenght--] = hold;

	}

}
