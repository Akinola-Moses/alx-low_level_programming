#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins for change.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return:1 or 0.
 */

int main(int argc, char *argv[])
{
	int cent = 0;
	int c[] = {25, 10, 5, 2, 1};
	int m1 = 0, idx = 0;
	int l = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}


	l = sizeof(c) / sizeof(c[0]);

	for (; idx < l; idx++)
	{
		while (cent >= c[idx])
		{
			cent = cent - c[idx];
			m1++;
		}
	}
	printf("%i\n", m1);
	return (0);
}
