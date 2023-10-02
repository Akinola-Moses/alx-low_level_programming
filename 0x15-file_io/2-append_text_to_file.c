#include "main.h"

/**
 * append_text_to_file - Will append
 * at the end of a file.
 * @filename: The file in question..
 * @text_content: String to add to
 * filename.
 *
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *p_f;

	if (!filename || !text_content)
	{
		return (-1);
	}

	p_f = fopen(filename, "a");

	if (!p_f)
	{
		return (-1);
	}

	fprintf(p_f, "%s", text_content);

	fclose(p_f);

	return (1);
}
