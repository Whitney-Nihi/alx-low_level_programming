#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of aruments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
