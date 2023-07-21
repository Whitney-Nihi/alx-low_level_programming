#include "main.h"
#include "stdio.h"

/**
*more_numbers - prints 0-14 10 times
*
**/
void more_numbers(void)
{
	int n, p;

	for (n = 1; n <= 10; n++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
				_putchar('1');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
