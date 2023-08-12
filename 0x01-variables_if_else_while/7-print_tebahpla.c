#include <stdio.h>

/**
 * main - Print the lower case alphabet in reverse order.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int r;

	for (r = 122; r >= 97; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
