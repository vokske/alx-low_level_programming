#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Specified string
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - Makes a copy of a string.
 * @src: String for which a copy will be made.
 * @dest: Pointer to buffer where the string will be copied to.
 *
 * Return: Pointer to the copy of the string (dest).
 */
char *_strcpy(char *src, char *dest)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to the new dog if created successfully. NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	if (name != NULL)
	{
		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	}
        _strcpy(d->name, name);

	d->age = age;

	if (owner != NULL)
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->owner);
			free(d);
			return (NULL);
		}
		_strcpy(d->owner, owner);
	}
	else
	{
		d->owner = NULL;
	}

	return (d);
}
