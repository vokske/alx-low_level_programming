#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

int main(void)
{
	struct dog dog1;

	init_dog(&dog1, "Rex", 4.5, "Voks");

	printf("Dog's name:%s\n", dog1.name);
	printf("Dog's age: %.1f\n", dog1.age);
	printf("Dog's owner: %s\n", dog1.owner);
	return (0);
}
