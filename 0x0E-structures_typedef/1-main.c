#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
int main()
{
	struct dog dog;
	init_dog(&dog, "Rex", 4.5, "Voks");

	printf("Dog's name:%s\n", dog.name);
	printf("Dog's age: %.1f\n", dog.age);
	printf("Dog's owner: %s\n", dog.owner);
	return (0);
}
