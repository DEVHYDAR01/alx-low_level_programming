#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This function will free the memory allocated for a struct dog
 * @d: This is the struct dog to free.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
