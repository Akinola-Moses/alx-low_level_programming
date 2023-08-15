#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: n number to be checked for sign.
 * Return: 1 and + if > 0, 0 and 0 if = 0, -1 and - if < 0.
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
