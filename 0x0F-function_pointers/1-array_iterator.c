#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as par on each element
 * of an array.
 * @array: The array in question.
 * @size: The size of the array.
 * @action: Pointer to function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx = 0;

	while (idx < size)
	{
		action(array[idx]);
		idx++;
	}
}
