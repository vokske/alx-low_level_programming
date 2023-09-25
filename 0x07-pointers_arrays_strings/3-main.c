#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always 0
 */
int main()
{
	char s[] = "Move that, along!";
	char accept[] = "Move that,";

	_strspn(s, accept);
	return (0);
}
