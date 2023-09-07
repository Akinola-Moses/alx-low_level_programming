#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array using malloc.
 * @nmemb: array.
 * @size: The size.
 * Return:pointer or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocator;
	unsigned int idx;
	char *memory_p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocator = malloc(nmemb * size);

	if (!allocator)
	{
		return (NULL);
	}

	memory_p = (char *)allocator;

	for (idx = 0; idx < nmemb * size; idx++)
	{
		memory_p[idx] = 0;
	}
	return (allocator);
}
