#include "main.h"

/**
 * read_textfile - Raed text file and print to the POSIX stdout.
 * @letters: NUmber of letters to be read and print.
 * @filename: The file in question.
 *
 * Return: 0 or the number read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t n_read = 0;
	int file = open(filename, O_RDONLY);

	if (!filename || !file)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(file);
	}

	n_read = read(file, buf, letters);

	if (n_read > 0)
	{
		write(STDOUT_FILENO, buf, n_read):
	}

	close(file);
	free(buf);
	return (n_read);
}
