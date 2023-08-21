#include <stdio.h>
#include "main.h"

/**
 * puts2 - Print every other character of a string.
 * @str: String to print.
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx += 2)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
