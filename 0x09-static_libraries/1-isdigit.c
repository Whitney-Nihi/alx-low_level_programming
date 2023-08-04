#include "main.h"
#include "stdio.h"

/**
 * _isdigit - checks for numbers
 *
 *@c: The ascii value of numbers
 *
 * Return: If digit 1 else 0.
 **/
int _isdigit(int c)
{

	if (c < 48 || c > 57)
	{
		return (0);

	} else
	{
		return (1);
	}
	return (c);
}
