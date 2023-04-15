#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file
 *		and prints it to the POSIX standard output
 * @filename: Read text
 * @letters: The number of letters it should read and print
 * Return: w- the actual number of letters it could read and print
 *           if the file can not be opened or read, return 0
 *          if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes,return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cos;
	ssize_t o;
	ssize_t w;
	ssize_t t;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	cos = malloc(sizeof(char) * letters);
	t = read(o, cos, letters);
	w = write(STDOUT_FILENO, cos, t);

	free(cos);
	close(o);
	return (w);
}
