#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: The bytes.
 *
 * Return: ptr.
 */

void *malloc_checked(unsigned int b)
{
	void *allocator;

	allocator = malloc(b);

	if (!allocator)
	{
		exit(98);
	}

	return (allocator);
}
