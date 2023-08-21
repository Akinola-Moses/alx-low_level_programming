#include "main.h"

/**
 * print_rev - Reverse the string.
 * @s: The string to reverse.
 *
 * Return: nothing.
 */

void print_rev(char *s)
{
	int idx;
	int l;/* will iterate through the string*/

	for (l = 0; s[l] != '\0'; l++)
	{

	}
	for (idx = l - 1; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
