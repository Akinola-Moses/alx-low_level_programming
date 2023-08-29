#include "main.h"

/**
 * print_chessboard - Prints a chesboard.
 * @a: The array.
 *
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int r = 0;
	int c;

	while (r < 8)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
		r++;
	}
}
