#include "main.h"
#include "stdio.h"

/**
 *print_rev - prints string in reverse
 *@s: string to be printed
 *Return: void
 **/
void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = count - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
