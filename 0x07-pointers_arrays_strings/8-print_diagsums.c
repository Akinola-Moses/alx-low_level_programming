#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of  2 diagonals of a square matrix of int.
 * @a: The array.
 * @size: The size.
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, idx = 0;

	while (idx < size)
	{
		sum1 = sum1 + a[idx * size + idx];
		sum2 =  sum2 + a[idx * size + (size - idx - 1)];
		idx++;
	}
	printf("%i, %i\n", sum1, sum2);
}
