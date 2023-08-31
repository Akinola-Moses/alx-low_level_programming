#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: number.
 *
 * Return: the factorial , 0 or -1.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
