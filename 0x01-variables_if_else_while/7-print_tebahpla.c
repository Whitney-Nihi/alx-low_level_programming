#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all lower case letters from z-a
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char lowerReverse;

	/* for loop to read from z - a*/
	for (lowerReverse = 'z'; lowerReverse >= 'a'; lowerReverse--)
	putchar(lowerReverse);
	putchar('\n');

	return (0);

}
