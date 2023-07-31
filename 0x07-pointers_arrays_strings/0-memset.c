#include "main.h"

/**
 * _memset - fills an area of memory with a constant value
 * @s: address of memory to be filled
 * @b: required value
 * @n: number of changed bytes
 *
 * Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
