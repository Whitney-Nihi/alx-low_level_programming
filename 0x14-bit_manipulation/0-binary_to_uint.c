#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary number
 *
 * Return: the converted number, 0 if b is NULL, or char in b ! 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num = 0;

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		num = 2 * num + (b[index] - '0');
	}

	if (b == NULL)
		return (0);

	return (num);
}
