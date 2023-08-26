#include "main.h"

/**
 * *infinite_add - Adds two integers.
 * @n1: First num.
 * @n2: Second n.
 * @r: buffer.
 * @size_r: buffer size.
 * Return: ptr to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n, add, nn, x;
	int rd = 0;
	int li = 0;
	int lj = 0, ly = 0;

	for (; n1[ly] != '\0'; ly++)
	{

	}
	for (; n2[lj] != '\0'; lj++)
	{

	}
	if ((size_r <= li + 1) || (size_r <= lj + 1))
	{
		return (0);
	}
	r[size_r - 1] = '\0';
	li--;
	lj--;
	for (x = size_r - 2; x >= 0; x--)
	{
		n = (li >= 0) ? n1[li] - '0' : 0;
		nn = (lj >= 0) ? n2[lj] - '0' : 0;
		add = n + nn + rd;
		r[x] = add % 10 + '0';
		li--;
		lj--;
	}
	if (r[0] == '0')
	{
		return (r + 1);
	}
	else
	{
		return (r);
	}
}
