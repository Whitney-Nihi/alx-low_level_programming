#include "main.h"
#include "stdio.h"

/**
 * print_alphabet_x10 - prints a -z 10 times
 *
 */
void print_alphabet_x10(void)
{
	char lower;

	int num;

	for (num = 0; num < 10; num++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)

		{
			putchar(lower);
		}
		putchar('\n');
	}

}
