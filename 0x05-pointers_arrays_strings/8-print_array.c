#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n element of an array of int.
 * @a:  par 1.
 * @n: number of elements to be printed.
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
