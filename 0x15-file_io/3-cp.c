#include "main.h"

/**
 * main - Perform copying function.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 or error..
 */

int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	FILE *p_ffrom, *p_fto;
	size_t n_w, n_r;
	char *file_from, *file_to;
	char buf_n[BUFBYTES];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	p_ffrom = fopen(file_from, "r");
	p_fto = fopen(file_to, "w");

	if (!p_ffrom)
	{
		fprintf(stderr, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	if (!file_to)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
		fclose(p_ffrom);
	}

	while ((n_r = fread(buf_n, 1, BUFBYTES, p_ffrom)) > 0)
	{
		n_w = fwrite(buf_n, 1, n_r, p_fto);
		/*
		if (n_w != n_r)
		{
			fprintf(stderr, "Error: Can't write to file_to\n");
			*/
			fclose(p_ffrom);
			fclose(p_fto);
			exit(99);
		}
	}

	if (fclose(p_ffrom) == EOF || fclose(p_fto) == EOF)
	{
		fprintf(stderr, "Error: Can't close filename\n");
		exit(100);
	}

	return (0);
}
