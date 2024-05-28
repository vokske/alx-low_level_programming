#include "dog.h"
#include <stdlib.h>

/**
 * free-dog - frees memory allocated for the struct dog and all its instances
 * @d: Struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
