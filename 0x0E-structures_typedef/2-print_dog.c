#include <stdio.h>

#include "dog.h"

/**
 * print_dog - prints the attributes dog i.e name, age and owner
 * @d: dog to print its attributes
 *
 * Return: void
 */
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
