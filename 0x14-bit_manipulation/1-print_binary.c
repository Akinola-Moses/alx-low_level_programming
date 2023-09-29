#include "main.h"

/**
 * print_binary - Returns the binary representaion of a num.
 * @n: The number to be converted.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int numto_binary = n;

	if (numto_binary > 1)
	{
		print_binary(numto_binary >> 1);
	}

	_putchar((numto_binary & 1) + '0');
}
