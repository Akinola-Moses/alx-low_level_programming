#include "main.h"

/**
 * _strcmp - Works exactly like strcmp(compares two strings).
 * @s1: First string.
 * @s2: String.
 * Return: 1, 0 or -1, depending on the result of the comparism.
 */

int _strcmp(char *s1, char *s2)
{
	int idx;

	idx = 0;

	for (; s1[idx] != '\0' && s2[idx] != '\0'; idx++)
	{
		if (s1[idx] != s2[idx])
		{
			return (s1[idx] - s2[idx]);
		}
	}
	if ((s1[idx] == '\0') && (s2[idx] == '\0'))
	{
		return (0);
	}
	else if (s1[idx] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
