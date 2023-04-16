#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file - the file buffer is storing chars for.
 *
 * Return: the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *fer;

	fer = malloc(sizeof(char) * 1024);

	if (fer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fer);
}

/**
 * close_file -  file c  descriptors.
 * @fd: f descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -  this copies the content of a file to another file.
 * @argc: actual number of arguments that was supplied to the program.
 * @argv: pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect then - exit code 97.
 * If file_from if it does not exist or cannot be read then - exit code 98.
 * If file_to can't be created or written to then - exit code 99.
 * If file_to or file_from if it cannot be closed then - exit code 100.
 */
int main(int argc, char *argv[])
{
	int 4rm, 2t, r, w;
	char *fer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fer = create_buffer(argv[2]);
	4rm = open(argv[1], O_RDONLY);
	r = read(4rm, fer, 1024);
	2t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (4rm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fer);
			exit(98);
		}

		w = write(2t, fer, r);
		if (2t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		2t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(fer);
	close_file(4rm);
	close_file(2t);

	return (0);
}
