#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = abs(n) % 10; /* l for last digit */
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	else if (l < 6 && l != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	return (0);
}
