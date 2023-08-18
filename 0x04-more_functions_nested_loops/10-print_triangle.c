#include "main.h"

/**
 * print_triangle - print a triangle.
 * @size: the size of the triangle.
 * Return: 0.
 */
void print_triangle(int size)
{
	int t1 = 0;
	int t2;

	if (t1 < (size - 1))
	{
		_putchar('\n');
	}
	for (t1 = 0; t1 < size; t1++)
	{
		for (t2 = 0; t2 < (size - 1); t2++)
		{
			_putchar(' ');
		}
		for (t2--; t2 < size; t2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
