#include "main.h"

/**
 * *_strchr - Locates a character in a string.
 * @s: The string that would be looped through.
 * @c: Character to look for.
 *
 * Return: Pointer.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
