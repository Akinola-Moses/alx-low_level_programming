#include "main.h"

/**
 * puts_half - Print half of a string.
 * @str: String to print the half.
 *
 * Return: nothing.
 */

void puts_half(char *str)
{
	int n, idx;
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{

	}
	n = ((l + 1) / 2);
	for (idx = n; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
