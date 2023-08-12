#include <stdio.h>

/**
 * main - Print all the possible combinations of single digit numbers.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
