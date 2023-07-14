#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all lower case letters
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char lower;

	/* for loop to read from a - z*/
	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);

}
