#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: fist par.
 * @y: second par.
 * Return: The pow or -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
