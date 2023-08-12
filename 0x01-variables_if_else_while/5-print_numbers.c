#include <stdio.h>

/**
 * main - Print all the digit numbers of base 10.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
