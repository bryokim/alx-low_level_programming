#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
