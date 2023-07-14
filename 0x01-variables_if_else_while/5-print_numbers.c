#include <stdio.h>
#include <stdlib.h>

/**
*main - prints single digit numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	/* for loop to print single digit numbers*/
	for (num = 0; num < 10; num++)
	printf("%d", num);
	printf("\n");

	return (0);
}
