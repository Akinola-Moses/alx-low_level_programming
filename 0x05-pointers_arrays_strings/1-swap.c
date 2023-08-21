#include "main.h"

/**
 * swap_int - Swap the value of two int.
 * @a: int 1.
 * @b: int 2.
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a; /*Temporary variable to store the value of int a*/

	*a = *b;
	*b = c;
}
