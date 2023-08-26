#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: pointer.
 * @size: .
 *
 * Return: nothing.
 */

void print_buffer(char *b, int size)
{
	int lo;
	int l1 = 0;
	int ll = 0;

	while (l1 < size)
	{
		printf("%.8x:", l1);

		while (ll < l1 + 10)
		{
			printf("%s%.2x", ll % 2 == 0 ? " " : "", ll < size ? *(b + ll) : 0);
			ll++;
		}
		printf(" ");

		lo = l1;


		while (lo < l1 + 10 && lo < size)
		{
			printf("%c", (*(b + lo) < 32 || *(b + lo) > 126) ? '.' : *(b + lo));
			lo++;
		}
		printf("\n");

		l1 = l1 + 10;
	}
}
