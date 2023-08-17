#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,excluding 2 and 4.
 *
 * Return: 0.
 */
void print_most_numbers(void)
{
	char n1_9;

	for (n1_9 = 48; n1_9 <= 57; n1_9++)
	{
		if ((n1_9 != 50) && (n1_9 != 52))
		{
			_putchar(n1_9);
		}
	}
	_putchar('\n');
}
