#include "main.h"
#include "stdio.h"

/**
 * _isupper - checks for uppercase character
 *
 *@c: The ascii value of uppercase letters
 *
 * Return: If lowercase 1 else 0.
 */
int _isupper(int c)
{

	if (c < 65 || c > 90)
	{
		return (0);

	}
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	return (c);
}
