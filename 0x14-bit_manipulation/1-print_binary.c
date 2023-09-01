#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int a;
	int b = 0;
	unsigned long int num;

	for (a = 63; a >= 0; a--)
	{
		num = n >> a;

		if (num & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
