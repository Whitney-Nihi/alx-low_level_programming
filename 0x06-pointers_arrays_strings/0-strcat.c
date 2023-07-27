#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destint = 0;
	int srcint = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destint++;
	for (a = 0; src[a] != '\0'; a++)
		srcint++;
	for (a = 0; a <= srcint; a++)
		dest[destint + a] = src[a];
	return (dest);
}
