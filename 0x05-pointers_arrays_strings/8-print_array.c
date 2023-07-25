#include "main.h"
#include "stdio.h"

/**
 *print_array - print n element of an array of integers
 *@a: array to be used
 *@n: number of elements to be printed
 *Return: void
 **/
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	printf("\n");
}
