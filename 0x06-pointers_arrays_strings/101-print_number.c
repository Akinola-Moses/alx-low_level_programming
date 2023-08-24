#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: the integer.
 *
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int j;

	if (n < 0)
	{
		_putchar (45);
		i = -n;
	}
	else
	{
		i = n;
	}
	j = 1;
	while ((i / j) >= 10)
	{
		j = j * 10;
	}
	while (j > 0)
	{
		_putchar ((i / j) + '0');
		i %= j;
		j /= 10;
	}
}

