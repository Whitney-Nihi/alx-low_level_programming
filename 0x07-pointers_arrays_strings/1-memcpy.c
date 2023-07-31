#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: variable where copied bytes are stored
 * @src: variable where bytes are copied from
 * @n: number of bytes
 *
 * Return: Memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
