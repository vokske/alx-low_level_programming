#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes struct dog
 *
 * @dog *d: Pointer to struct dog
 * @*name: Pointer to dog name
 * @age: dog age
 * @*owner: Pointer to dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
