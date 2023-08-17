#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: 0.
 */

void times_table(void)
{
	int p1, p2, mul;

	for (p1 = 0; p1 <= 9; p1++)
	{
		for (p2 = 0; p2 <= 9; p2++)
		{
			mul = p1 * p2;

			if (p2 == 0)
			{
				_putchar(mul + '0');
			}
			if (mul <= 9 && p2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
