#include <stdio.h>

/**
 * positive_or_negative - Test if an number is + or -.
 * @n: number to test.
 * Return: result.
 */
positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d id negative", n);
	}
	return (n);
