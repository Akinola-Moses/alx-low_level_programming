#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string.
 * @s: the string.
 * Return: s.
 */

char *cap_string(char *s)
{
	int idx = 0;
	int cl = 1;

	while (s[idx] != '\0')
	{
		if (s[idx] == ' ' || s[idx] == '\t'
|| s[idx] == '\n' || s[idx] == ',' || s[idx] == ';'
|| s[idx] == '.' || s[idx] == '!' || s[idx] == '?'
|| s[idx] == '"' || s[idx] == '(' || s[idx] == ')' ||
s[idx] == '{' || s[idx] == '}')
		{
			cl = 1;
		}
		else if (cl && s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] = s[idx] -  'a' + 'A';
			cl = 0;
		}
		else if (!cl && s[idx] >= 'A' && s[idx] <= 'Z')
		{
			s[idx] = s[idx] - 'A' + 'a';
		}
		idx++;
	}
	return (s);
}
