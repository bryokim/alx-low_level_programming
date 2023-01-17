#include <stdlib.h>
#include <string.h>

#include "dog.h"

/**
 * new_dog - creates a new dog and allocates it memory
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}
