#include "main.h"

/**
 * reverse_array - Reverses the content of an array of int.
 * @a: Array.
 * @n: Number of elements of the array.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int idx, l, tv;

	for (l = 0; a[l] != '\0'; l++)
	{

	}
	for (idx = 0; idx < n / 2; idx++)
	{
		tv = a[idx];
		a[idx] = a[n - 1 - idx];
		a[n - 1 - idx] = tv;
	}
}
