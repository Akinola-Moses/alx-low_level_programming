#include "main.h"

/**
 * _printerr - Print error message 
 * and exit.
 * @e_exit: For the exit.
 * @format: Format parameter.
 * Return - Nothing.
 */

void _printerr(int e_exit, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);

	va_end(args);
	exit(e_exit);
}


/**
 * main - Copy the content of a file
 * to another.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success or -1 otherwise.
 */

int main(int argc, char *argv[])
{
	char my_buf[MY_BUF];
	ssize_t ffrom = 0, fto = 0;
	int n_read, n_write;

	if (argc != 3)
	{
		_printerr(97, "Usage: cp file_from file_to\n");
	}

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		_printerr(98, "Error: Can't read from file %s\n", argv[1]);
	}

	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fto == -1)
	{
		close(ffrom);
		_printerr(99, "Error: Can't write to %s\n", argv[2]);
	}

	n_read = read(ffrom, my_buf, MY_BUF);
	while (n_read > 0)
	{
		n_write = write(fto, my_buf, n_read);
		if (n_write != n_read)
		{
			close(ffrom);
			close(fto);
			_printerr(99, "Error: Can't write to %s\n", argv[2]);
		}
		n_read = read(ffrom, my_buf, MY_BUF);
	}
	if (n_read == -1)
	{
		close(ffrom);
		close(fto);
		_printerr(98, "Error: Can't read from file %s\n", argv[2]);
	}
	if (close(ffrom) == -1)
	{
		_printerr(100, "Error: Can't close fd %i\n", ffrom);
	}

	if (close(fto) == -1)
	{
		_printerr(100, "Error: Can't close fd %i\n", fto);
	}
	return (0);
}
