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
	int t_file = open(filename, O_RDONLY);

	if (!filename || !t_file)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(t_file);
	}

	n_read = read(t_file, buf, letters);

	if (n_read > 0)
	{
		write(STDOUT_FILENO, buf, n_read);
	}

	close(t_file);
	free(buf);

	return (n_read);
}
