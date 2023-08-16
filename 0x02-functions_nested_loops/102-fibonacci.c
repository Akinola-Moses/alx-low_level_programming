#include <stdio.h>
/**
 * main - Print the first 50 Fibonacci numbers.
 * Return: 0.
 */
int main(void)
{
	long int a, l, x, pd;

	l = 1;

	x = 2;
	for (a = 1; a <= 50; ++a)
	{
		if (l != 20365011074)
		{
			printf("%ld, ", l);
		} else
		{
			printf("%ld\n", l);
		}
		pd = l + x;
		l = x;
		x = pd;
	}

	return (0);
}
