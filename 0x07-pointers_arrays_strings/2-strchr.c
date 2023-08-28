#include <stdlib.h>
#include "main.h"
/**
 * *_strchr - This function will locate a character in a string.
 *
 * @s: This is the string in which you want to search for the target character.
 * @c: This is the target charater you want to find in the string.
 *
 * Return: This will return the pointer@s.
 */
char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; (s[str] != c) && (s[str] != '\0'); str++)
		;
	if (s[str] == c)
	{
		return (s + str);
	else
		return (NULL);
	}
}
