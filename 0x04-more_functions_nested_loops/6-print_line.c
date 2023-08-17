#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of time it should be printed.
 * Return: 0.
 */
void print_line(int n)
{
	int st;

	for (st = 0; st < n; st++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
