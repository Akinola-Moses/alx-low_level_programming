#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: 0.
 */
void print_numbers(void)
{
	char n1_9;

	for (n1_9 = 48; n1_9 <= 57; n1_9++)
	{
		_putchar(n1_9);
	}
	_putchar('\n');
}
