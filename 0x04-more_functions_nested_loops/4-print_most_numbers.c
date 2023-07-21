#include "main.h"
#include "stdio.h"

/**
 *print_most_numbers - prints numbers from 0-9 except 2 and 4
 *
 **/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2)
		continue;

		if (i == 4)
		continue;

		_putchar(i + '0');
	}
	_putchar('\n');
}
