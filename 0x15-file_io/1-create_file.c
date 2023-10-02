#include "main.h"

/**
 * create_file - Will create a file.
 * @filename: file to be created..
 * @text_content: String to write into the
 * filename.
 *
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	FILE *p_f;
	ssize_t n_w, l;

	if (!filename)
	{
		return (-1);
	}

	p_f = fopen(filename, "w");

	if (!p_f)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		l = strlen(text_content);

		n_w = fwrite(text_content, sizeof(char), l, p_f);
		if (n_w != l)
		{
			fclose(p_f);
			return (-1);
		}
	}
	fclose(p_f);

	return (1);
}
