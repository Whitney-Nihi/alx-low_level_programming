#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename - string to store read file
 * @letters - number of letters to read and print
 *
 * Return: 0 if filename is null or cannot be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr = NULL;

	ptr = fopen("Requiescat", "r");
	if (ptr == NULL)
		return (0);
	fgets(filename, letters, ptr);
		printf("%s", filename);
		return (0);
}
