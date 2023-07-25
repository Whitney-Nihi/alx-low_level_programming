#include "stdio.h"
#include <string.h>
#include <limits.h>

/**
 *_atoi - convert a string to an integer
 *@s: string to be converted
 *Return: base
 **/
int _atoi(char *s)
{
	int a = 1;

	int base = 0;

	int b = 0;

	while (s[b] == ' ')
	{
		b++;
	}
	if (s[b] == '-' || s[b] == '+')
	{
		a = 1 - 2 * (s[b++] == '-');
	}
	while (s[b] >= '0' && s[b] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[b] - '0' > 7))
		{
			if (a == 1)
				return (INT_MAX);
				else
				return (INT_MIN);
		}
		base = 10 * base + (s[b++] - '0');
	}
	return (base * a);
}
