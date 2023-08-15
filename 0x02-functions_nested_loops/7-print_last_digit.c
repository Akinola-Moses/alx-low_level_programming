#include "main.h"

/**
 * print_l.çhiast_digit - Prints the last digit.
 * @r: Parameyer 1.
 * Return: The value of thr last digiit.
 */

int print_last_digit(int r)
{
	int l = r % 10;
	
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
