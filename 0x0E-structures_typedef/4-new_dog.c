#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @s: Specified string
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Makes a copy of a string.
 * @src: String for which a copy will be made.
 * @dest: Pointer to buffer where the string will be copied to.
 *
 * Return: Pointer to the copy of the string (dest).
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
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
	dog_t *d;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	return (d);
}
