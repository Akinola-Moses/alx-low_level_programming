#include "main.h"

/**
 * *_strncpy - Copies a string.
 * @dest: Destination of the copied string.
 * @src: Where the string will be copied from.
 * @n: limit.
 * Return: 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int idx = 0;

	while (idx < n && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	for (; idx < n; idx++)
	{
		dest[idx] = '\0';
	}
	return (ptr);
}
