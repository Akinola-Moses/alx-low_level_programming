#include "main.h"

/**
 * main - Compute the addition of multiple of 3 and 5 bellow n.
 * Return: 0.
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y = y + x;
	}
	printf("%d\n", y);
	return (0);
}
