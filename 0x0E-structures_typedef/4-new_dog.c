#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This function will return the length of a string
 * @s: This is the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int f;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}

	return (f);
}

/**
 * *_strcpy - This function will copy the string pointed to by src
 * including terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: This is the pointer to the buffer that  we will copy the string
 * @src: This is the string to be copied
 *
 * Return: This is the  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l1, n;

	l1 = 0;

	while (src[l1] != '\0')
	{
		l1++;
	}

	for (n = 0; n < l1; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}

/**
 * new_dog - This function will create a new dog struct
 * @name: This will be the name of the dog
 * @age: This is the age of the dog
 * @owner: This will be the owner of the dog
 *
 * Return: This is the pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
