#include "main.h"

/**
 * _puts - Print a string.
 * @str: The string ro print.
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar (str[idx]);
	}
	_putchar('\n');
}
