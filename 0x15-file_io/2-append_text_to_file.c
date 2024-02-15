#include "main.h"

/**
 * append_text_to_file - Start writing after
 * the cursor.
 * @filename: File to be appended.
 * @text_content: String to be added to
 * the file.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n_write = 0;
	int t_file = 0;


	t_file = open(filename, O_APPEND | O_WRONLY);

	if (t_file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		n_write = write(t_file, text_content, strlen(text_content));

		if (n_write == -1)
		{
			close(t_file);
			return (-1);
		}
	}

	close(t_file);
	return(1);
}
