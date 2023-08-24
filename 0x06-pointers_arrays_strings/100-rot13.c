#include "main.h"

/**
 * *rot13 - Encodes a string using rot13.
 * @s: String.
 *
 * Return: s.
 */

char *rot13(char *s)
{
	char ch = 0;
	char *c1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *c2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int idx1 = 0, idx2;

	while (s[idx1])
	{
		ch = s[idx1];
		idx2 = 0;
		while (c1[idx2])
		{
			if (ch == c1[idx2])
			{
				s[idx1] = c2[idx2];
				break;
			}
			idx2++;
		}
		idx1++;
	}
	return (s);
}
