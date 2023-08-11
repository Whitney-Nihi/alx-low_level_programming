#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory to fill
 * @b: char to copy
 * @n: copy frequency
 *
 * Return: pointer to the memory area to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: array size
 * @size: array element size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
