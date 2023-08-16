#include "main.h"

/**
 * jack_bauer - prints every minute of the day of J.B.
 * Return: 0.
 */

void jack_bauer(void)
{
	int hr = 0;
	int mt = 0;

	while (hr < 24)
	{
		mt = 0;

		while (mt < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mt / 10) + '0');
			_putchar((mt % 10) + '0');
			_putchar('\n');
			mt++;
		}
		hr++;
	}
}
