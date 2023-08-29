#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes.
 * @s: string 1.
 * @accept: string 2.
 *
 * Return: pointer or 0.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *pa = accept;

		while (*pa != '\0')
		{
			if (*s == *pa)
			{
				return (s);
			}
			pa++;
		}
		s++;
	}
	return ('\0');
}
