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
	struct dog my_dog;
	init_dog(&my_dog, "Rex", 4.5, "Voks");

	printf("Dog's name:%s\n", my_dog.name);
	printf("Dog's age: %.1f\n", my_dog.age);
	printf("Dog's owner: %s\n", my_dog.owner);
	return (0);
}
