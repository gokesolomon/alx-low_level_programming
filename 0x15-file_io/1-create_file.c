#include "main.h"

/**
 * create_file -Create a function that creates a file.
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: the name of the file to be created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, bet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (bet = 0; text_content[bet];)
			bet++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, bet);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
