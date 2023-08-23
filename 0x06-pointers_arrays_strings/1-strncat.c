#include "main.h"
#include <stddef.h>

/**
 * *_strncat - Concatenates two strings(strncat implementation.
 * @dest: Destination and the resulting variable.
 * @src: The source of the string that will be appended to the dest.
 * @n: The limit.
 * Return: Pointer to dest(resulting dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int l = 0;

	for (; *dest != '\0'; dest++)
	{
		l++;
	}
	for (; *src && n > 0; src++)
	{
		*dest = *src;
		dest++;
		n--;
		*dest = '\0';
	}
	return (ptr);
}
