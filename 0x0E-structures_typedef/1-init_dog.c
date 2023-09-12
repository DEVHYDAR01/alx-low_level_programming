#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - This will initializes a variable of type struct dog
 * @d: This will be the pointer to struct dog to initialize
 * @name: This is the name to initialize
 * @age: The age to be initialize
 * @owner: This is the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
