#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: 0.
 */

void times_table(void)
{
	int p1 = 0;
	int p2 = 0;
	int mul;

	while (p1 <= 9)
	{
		while (p2 <= 9)
		{
			mul = p1 * p2;

			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (p2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			p2++;
		}

		p1++;

		_putchar('\n');
		p2 = 0;
	}
	_putchar('$');
}
