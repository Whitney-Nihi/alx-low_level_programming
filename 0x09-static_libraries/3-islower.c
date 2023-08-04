#include "main.h"
#include "stdio.h"

/**
 * _islower - checks for lowercase character
 *
 *@c: The ascii value of lowercase letters
 *
 * Return: If lowercase 1 else 0.
 */
int _islower(int c)
{

	if (c < 97 || c > 122)
	{
		return (0);

	}
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	return (c);
}
