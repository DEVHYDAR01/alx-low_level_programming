#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - This is afunction that will concatenates two strings
 * returned pointer shall point to a newly allocated space
 * in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * @s1: This is the string for concatenation
 * @s2: This is the string from which to transfer.
 * @n: int type
 * Return: pointer to new memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int incre, incre1,
	int L1, L2;
	char *point;
	int mark = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (L1 = 0; s1[L1] != '\0'; L1++)
		;
	for (L2 = 0; s2[L2] != '\0'; L2++)
		;
	if (mark >= L2)
	{
		mark = L2;
		point =  malloc(sizeof(char) * (L1 + L2 + 1));
	}
	else
		point = malloc(sizeof(char) * (L1 + n + 1));
	if (point == NULL)
	{
		return (NULL);
	}
	for (incre = 0; incre < L1; incre++)
	{
		point[incre] = s1[incre];
	}
	for (incre1 = 0; incre1 < mark; incre1++)
	{
		point[incre++] = s2[incre1];
	}
	point[incre++] = '\0';

	return (point);
}
