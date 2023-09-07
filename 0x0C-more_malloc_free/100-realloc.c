#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Realocates a memory block.
 * @ptr: old pointer.
 * @old_size: Previous size.
 * @new_size: New one.
 * Return: Void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int idx;
	unsigned char *old_m, *new_m;
	void *new_p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_p = malloc(new_size);

	if (new_p == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		old_m = (unsigned char *)ptr;
		new_m = (unsigned char *)new_p;

		for (idx = 0; idx < old_size && idx < new_size; idx++)
		{
			new_m[idx] = old_m[idx];
		}
		free(ptr);
	}
	return (new_p);
}
