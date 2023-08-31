#include "main.h"

/**
 * is_prime_number - Checks for prime number.
 * @n: The number to check.
 *
 * Return: myprime or 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return ((my_prime(n, 2)));
	}
}

/**
 * my_prime - Determine a prime number.
 * @n: Thr number to check.
 * @dv:Dividing int.
 *
 * Return: 1 or 0.
 */

int my_prime(int n, int dv)
{
	if (dv == n)
	{
		return (1);
	}
	else if ((n % dv) == 0)
	{
		return (0);
	}
	else
	{
		return ((my_prime(n, dv + 1)));
	}
}
