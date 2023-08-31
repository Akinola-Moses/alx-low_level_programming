#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The num.
 *
 * Return: The sqrt.
 */

int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 1));
}

/**
 * my_sqrt - Recursively find the sqrt.
 * @n: The number.
 * @idx: Finder.
 *
 * Return: sqrt, 0 or -1.
 */

int my_sqrt(int n, int idx)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((idx * idx) > n)
	{
		return (-1);
	}
	else if ((idx * idx == n))
	{
		return (idx);
	}
	else
	{
		return (my_sqrt(n, idx + 1));
	}
}
