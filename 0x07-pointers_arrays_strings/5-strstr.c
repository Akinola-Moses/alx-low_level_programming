#include "main.h"

/**
 * *_strstr - Locates a substring needle.
 * @haystack: str 1.
 * @needle: str 2.
 *
 * Return: pointer or '\0'.
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack; haystack++)
	{
		char *a = haystack, *b = needle;

		for (; *b && *a == *b; a++, b++)
		{

		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return ('\0');
}
