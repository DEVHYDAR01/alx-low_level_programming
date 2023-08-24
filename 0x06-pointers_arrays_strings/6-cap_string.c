#include "main.h"

/**
 * cap_string - This function will capitalizes every word of the string
 * @s: This is the string to modify with
 *
 * Return: It will return the resulting string
 */
char *cap_string(char *s)
{
	int arr, jrr;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}' };

	for (arr = 0; s[arr] != '\0'; arr++)
	{
		if (arr == 0 && s[arr] >= 'a' && s[arr] <= 'z')
		s[arr] -= 32;

		for (jrr = 0; jrr < 13; jrr++)
		{
			if (s[arr] == spe[jrr])
			{
				if (s[arr + 1] >= 'a' && s[arr + 1] <= 'z')
				{
					s[arr + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
