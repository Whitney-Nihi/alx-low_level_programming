#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the 2 diagonals of a square matrix of numbers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, b;

	num1 = 0;
	num2 = 0;

	for (b = 0; b < size; b++)
	{
		num1 = num1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		num2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
