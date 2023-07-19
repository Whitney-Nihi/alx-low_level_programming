#include "main.h"
#include "stdio.h"

/**
* print_alphabet - prints a -z
*
*/
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	putchar('\n');


}
