#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * @n: number of bytes to concatenate from string 1 to string 2
 *
 * Return: pointer to the combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;

	unsigned int num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;

	if (n < num2)
		s = malloc(sizeof(char) * (num1 + n + 1));
	else
		s = malloc(sizeof(char) * (num1 + num2 + 1));

	if (!s)
		return (NULL);

	while (i < num1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < num2 && i < (num1 + n))
	{
		s[i++] = s2[j++];
	}

	while (n >= num2 && i < (num1 + num2))
	{
		s[i++] = s2[j++];
	}

	s[i] = '\0';

	return (s);
}
