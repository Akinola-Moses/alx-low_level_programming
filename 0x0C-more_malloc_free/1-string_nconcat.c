#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using malloc.
 * @s1: String 1.
 * @s2: String 2.
 * @n: n bytes,part of s2.
 * Return: Null or p.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, id;
	char *concatt;
	unsigned int l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0' && l2 < n)
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}
	concatt = malloc(sizeof(char) * (l1 + n + 1));

	if (!concatt)
	{
		return (NULL);
	}

	for (idx = 0; idx <  l1; idx++)
	{
		concatt[idx] = s1[idx];
	}
	for (id = 0; id < n; id++)
	{
		concatt[idx] = s2[id];
		idx++;
	}
	concatt[idx] = '\0';
	return (concatt);
}
