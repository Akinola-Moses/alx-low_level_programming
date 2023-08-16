#include <stdio.h>
/**
 * main - Finds and prints the sum of the even-valued terms.
 * Return: 0.
 */
int main(void)
{
	int a;
	unsigned long int l, x, pd, add;

	l = 1;
	x = 2;
	add = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (l < 4000000 && (l % 2) == 0)
		{
			add = add + l;
		}
		pd = l + x;
		l = x;
		x = pd;
	}

	printf("%lu\n", sum);

	return (0);
}
