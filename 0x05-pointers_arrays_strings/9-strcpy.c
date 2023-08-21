#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by by src to buffer through dest.
 * @dest: Destination.
 * @src: Source.
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';
	return (dest);
}
