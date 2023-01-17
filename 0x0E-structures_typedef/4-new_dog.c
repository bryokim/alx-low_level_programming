#include <stdlib.h>
#include <string.h>

#include "dog.h"

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