#include <stdio.h>

#include "dog.h"

void print_dog(struct dog *d)
{
    if (!d)
    {
        return;
    }
    else
    {
        (d->name) ? printf("Name: %s", d->name) : printf("Name: (nil)");
         putchar ('\n');
        
        (d->age) ? printf("Age: %f", d->age) : printf("Age: (nil)");
         putchar('\n');

        (d->owner) ? printf("Owner: %s", d->owner) : printf("Owner: (nil)");
        putchar('\n');

        return;
    }
}