#include "main.h"
#include "stdio.h"

/**
 * _abs - computes the absolute value of an integer
 *
 *@n: negative number converted to non-negative
 *
 * Return: non-negative number.
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
