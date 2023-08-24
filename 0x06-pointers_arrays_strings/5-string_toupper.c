#include "main.h"

/**
 * *string_toupper - Changes all lowercase of a string to uppercase.
 * @s: parameter.
 * Return: ptr.
 */

char *string_toupper(char *s)
{
	int idx = 0;
	char *ptr = s;

	while (s[idx] != '\0')
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] = s[idx] - 'a' + 'A';
		}
		idx++;
	}
	return (ptr);
}
