#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	struct dog my_dog = {"Bosco", 4.5, "Voks"};

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);
	return (0);
}
