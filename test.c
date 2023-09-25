#include <stdio.h>

int main()
{
	int var = 5;
	int *p = &var;
	int **pt = &p;

	printf("Size of pointer is %zu", sizeof(*p));
	printf("Size of pointer to pointer is %zu", sizeof(pt));
	return (0);
}
