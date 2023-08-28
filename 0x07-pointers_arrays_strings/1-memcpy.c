#include "main.h"

/**
 * *_memcpy - Copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: n bytes to copy.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
