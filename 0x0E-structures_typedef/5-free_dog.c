#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - frees memory allocated to dog
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	exit(EXIT_SUCCESS);
}
