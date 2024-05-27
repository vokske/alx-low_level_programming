#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

		return;

	if (d->name != NULL)

		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
