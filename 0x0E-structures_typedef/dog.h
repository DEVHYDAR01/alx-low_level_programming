#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - This is a dog's basic info
 * @name: The name of the dog
 * @age: The Age of the dog
 * @owner: Who is the owner of the dog
 *
 * Description: There is no description for this struct.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - This is the typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
