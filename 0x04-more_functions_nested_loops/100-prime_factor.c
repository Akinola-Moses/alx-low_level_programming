#include <stdio.h>

/**
 * main - prints the largest prime factor of the number.
 *
 * Return: 0.
 */
int main(void)
{
	long pn = 612852475143;
	long pf = 2;

	while (pf <= pn)
	{
		if ((pn % pf) == 0)
		{
			pn = pn / pf;
			pf--;
		}
		pf++;
	}
	printf("%ld\n", pf);
	printf("\n");
	return (0);
}
