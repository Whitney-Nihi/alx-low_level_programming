#include "main.h"
/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string
 * @accept: set of bytes to be searched for
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
