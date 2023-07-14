#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all lower case letters exclusing q and e
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char lower;

	/* for loop to read from a - z and remove q and e*/
	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower == 'e')
	continue;
	if (lower == 'q')
	continue;
	putchar(lower);
	}

	putchar('\n');


	return (0);

}
