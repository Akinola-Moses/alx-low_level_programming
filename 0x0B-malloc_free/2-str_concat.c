#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatinate 2 string, dynamically allocating the memory.
 * @s1: Host string.
 * @s2: String 2.
 *
 * Return: S1 or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int idx = 0, id = 0;
	int l1 = 0, l2 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

		cat = malloc(sizeof(char) * (l1 + l2 + 1));

		if (cat == NULL)
		{
			return (NULL);
		}

		for (; idx < l1; idx++)
		{
			cat[idx] = s1[idx];
		}

		for (; id < l2; id++, idx++)
		{
			cat[idx] = s2[id];
		}

		cat[idx] = '\0';
		return (cat);
}
