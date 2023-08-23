#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string.
 * @s: the string.
 * Return: s.
 */

char *cap_string(char *s)
{
	int idx = 0;
	int cl;

	while (s[idx] != '\0')
	{
		if s[idx] == ',' || s[idx] == 
