#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: String to convert.
 *
 * Return: 1 or 0.
 */

int _atoi(char *s)
{
	int idx, ns, a, b, c, d, nm;
	a = 0;
	b = 0;
	c = 0;
	d = 0;

	for (idx = 0; s[idx] == ' '; idx++)
	{

	}
	if ((s[idx]) == '-')
	{
		ns = -1;
	}
	else if ((s[idx]) == '+')
	{
		ns = 1;
	}
	else
	{
		ns = 1;
	}
	while (s[idx] >= '0' && s[idx] <= '9')
	{
		nm = s[idx] - '0';
		if (a > (b / 10) || (a == b / 10 && nm > b % 10))
		{
			if (ns == 1)
			{
				return (c);
			}
			else
			{
				return (d);
			}
		}
		a = a * 10 + nm;
		idx++;
	}
	return (a * ns);
}
