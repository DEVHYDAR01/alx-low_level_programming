#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - This function will create a new struct of type dog
  * @name: This will be the struct parameter name
  * @age: This is the struct parameter age
  * @owner: This will be the struct parameter owner
  * Return: This will  return a pointer to the buffer of the datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int 1len, 2len, k;
	dog_t *doggy;

	1len = 2len = 0;
	while (name[1len++])
		;
	while (owner[2len++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = malloc(1len * sizeof(doggy->name));
	if (doggy == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < 1len; k++)
	{
		doggy->name[k] = name[k];
	}

	doggy->age = age;

	doggy->owner = malloc(2len * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < 2len; k++)
	{
		doggy->owner[k] = owner[k];
	}
	return (doggy);
}
