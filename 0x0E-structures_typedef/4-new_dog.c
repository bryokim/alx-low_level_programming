#include <stdlib.h>

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

	char *_strdup(char *str);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];

	ptr[j] = '\0';

	return (ptr);
}
