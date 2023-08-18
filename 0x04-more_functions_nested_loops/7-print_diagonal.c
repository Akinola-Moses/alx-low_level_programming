#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal.
 * @n: number of time the character should be printed.
 * Return: 0.
 */
void print_diagonal(int n)
{
	int d1, d2;

	if  (n <= 0)
	{
		_putchar('\n');
	}

	for (d1 = 0; d1 < n; d1++)
	{
		for (d2 = 0; d2 < d1; d2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
