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
	FILE *p_f;
	char *l_b;
	ssize_t n_randp;

	n_randp = 0;

	if (filename == NULL)
	{
		return (0);
	}

	p_f = fopen(filename, "r");

	if (!p_f)
	{
		return (0);
	}

	l_b = malloc(sizeof(char) * letters);

	if (!l_b)
	{
		fclose(p_f);
		return (0);
	}


	while (fgets(l_b, letters, p_f))
	{
		fputs(l_b, stdout);
		n_randp += strlen(l_b);
	}
	fclose(p_f);

	free(l_b);
	return (n_randp);
}
