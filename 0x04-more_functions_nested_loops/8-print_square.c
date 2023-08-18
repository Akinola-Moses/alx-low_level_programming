#include "main.h"

/**
 * print_square - print a square.
 * @size: size of the square.
 * Return: 0.
 */
void print_square(int size)
{
	int s1, s2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (s1 = 0; s1 < size; s1++)
	{
		for (s2 = 0; s2 < size; s2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
