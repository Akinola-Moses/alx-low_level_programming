#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: par 1.
 * @accept: Par 2.
 *
 * Return: n of byte.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	char *pa;
	int foundit;

	do {
		pa = accept;
		foundit = 0;
		do {
			if (*s == *pa)
			{
				foundit = 1;
				break;
			}
			pa++;
		} while (*pa != '\0');

		if (foundit == '\0')
		{
			break;
		}
		s++;
		l++;
	} while (*s != '\0');

	return (l);
}
