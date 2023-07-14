#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all base 16 numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	char hex;

	/* for loop to print base 16 numbers*/
	for (num = 0; num < 10; num++)
	putchar(48 + num);


	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);
	putchar('\n');

	return (0);
}
