#include "main.h"
#include "stdio.h"

/**
 *_strlen - returns the length of a string
 *@s: string to be counted
 *Return: length of the string
 **/
int _strlen(char *s)
{
	int a;

	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;
	return (b);
}
