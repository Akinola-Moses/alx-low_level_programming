#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase.
 *
 * Return: 0 (Always).
 */

void print_alphabet(void)
{
	char alphab = 97;

	while (alphab <= 122)
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
