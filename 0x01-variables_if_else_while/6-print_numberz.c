#include <stdio.h>

/**
 * main - Print all single digits number of base 10.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int b10;

	for (b10 = 48; b10 <= 57; b10++)
	{
		putchar(b10);
	}
	putchar('\n');
	return (0);
}
