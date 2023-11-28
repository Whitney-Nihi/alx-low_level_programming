#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: string to store read file
 * @letters: number of letters to read and print
 *
 * Return: 0 if filename is null or cannot be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fd;
	ssize_t i;
	ssize_t j;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	j = read(fd, ptr, letters);
	i = write(STDOUT_FILENO, ptr, j);

	free(ptr);
	close(fd);
	return (i);
}
