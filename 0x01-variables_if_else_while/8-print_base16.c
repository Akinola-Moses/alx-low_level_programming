#include <stdio.h>

/**
 * main - Print all the number of base 16.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int d;
	int x;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
