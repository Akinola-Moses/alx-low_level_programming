#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create anarray of integers.
 * @max: Maximum range.
 * @min: Minimum range.
 *
 * Return: p or NULL.
 */

int *array_range(int min, int max)
{
	int *arrof_int;
	int idx;

	if (min > max)
	{
		return (NULL);
	}
	arrof_int = malloc((max - min + 1) * sizeof(int));

	if (!arrof_int)
	{
		return (NULL);
	}

	for (idx = 0; idx <= (max - min); idx++)
	{
		arrof_int[idx] = min + idx;
	}
	return (arrof_int);
}
