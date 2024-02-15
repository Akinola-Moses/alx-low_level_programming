#include "main.h"

/**
 * create_file - Create a file.
 * @filename: File to be created.
 * @text_content: String to be written to
 * the file.
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int n_write = 0;

	int t_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (!t_file)
	{
		return (-1);
	}

	if (text_content)
	{
		n_write = write(t_file, text_content, strlen(text_content));

		if (!n_write)
		{
			close(t_file);
			return (-1);
		}
	}

	close(t_file);
	return(1);
}
