#include "function_pointers.h"

/**
 * int_index - Searches for an int.
 * @array: The array.
 * @size: Number of elements in the array.
 * @cmp: POinter to function.
 *
 * Return: >= 0 or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (idx < size)
	{
		if (cmp(array[idx]))
		{
			return (idx);
		}
		idx++;
	}
	
	return (-1);
}
