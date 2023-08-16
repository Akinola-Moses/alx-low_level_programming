#include "main.h"
/**
 * print_times_table - print the n times table, starting with 0.
 * @n: Parameter.
 * Return: 0.
 */
void print_times_table(int n)
{
	int p1, p2, mul;

	if ((n >= 0) && (n <= 15))
	{
		for (p1 = 0; p1 <= n; p1++)
		{
			for (p2 = 0; p2 <= n; p2++)
			{
				mul = p1 * p2;
				if (p2 == 0)
				{
					_putchar(mul + '0');
				} else if (mul < 10 && p2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				} else if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				} else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
