#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lower case 10x.
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	char alphab;
	int ialphab = 1;

	while (ialphab <= 10)
	{
		alphab = 97;
		while (alphab <= 122)
		{
			_putchar(alphab);
			alphab++;
		}
		_putchar ('\n');
		ialphab++;
	}
}
