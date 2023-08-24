#include "main.h"

/**
 * *leet - Encode a string into 1337.
 * @s: String.
 *
 * Return: s.
 */

char *leet(char *s)
{
	char l_array[128] = {0};
	int idx = 0;
	unsigned char ch = 0;

	l_array['A'] = '4';
	l_array['a'] = '4';
	l_array['E'] = '3';
	l_array['e'] = '3';
	l_array['O'] = '0';
	l_array['o'] = '0';
	l_array['T'] = '7';
	l_array['t'] = '7';
	l_array['L'] = '1';
	l_array['l'] = '1';

	while (s[idx] != '\0')
	{
		ch = s[idx];
		if (l_array[ch] != 0)
		{
			s[idx] = l_array[ch];
		}
		idx++;
	}
	return (s);
}
