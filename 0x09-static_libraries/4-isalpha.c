#include "main.h"
#include "stdio.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *@c: The ascii value of alphabetic characters
 *
 * Return: If alphabetic 1 else 0.
 */
int _isalpha(int c)
{

	if (c < 65 || c > 122)
	{
		return (0);

	}
	if (c > 90 && c < 97)
	{
		return (0);
	}

	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	if (c >= 65 || c <= 90)
	{
		return (1);
	}

	return (c);
}
