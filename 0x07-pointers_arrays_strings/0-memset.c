#include "main.h"

/**
 * *_memset - Fills memory with a constant byte..
 * @s: pointer.
 * @b: value to be filled.
 * @n: number of byte.
 *
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx = 0;

	while (idx < n)
	{
		s[idx] = b;
		idx++;
	}
	return (s);
}
