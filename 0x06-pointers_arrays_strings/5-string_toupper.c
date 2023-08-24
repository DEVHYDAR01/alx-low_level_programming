#include "main.h"
/**
 * string_topper - This function will change all members of 
 * a string from lowercase to uppercase
 * @s: This is the string to modify
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int uppers;

	for (uppers = 0; s[uppers] != '\0'; uppers++)
	{
		if (s[uppers] >= 'a' && s[uppers] <= 'z')
		s[uppers] = s[uppers] - 32;
	}

	return (s);
}
