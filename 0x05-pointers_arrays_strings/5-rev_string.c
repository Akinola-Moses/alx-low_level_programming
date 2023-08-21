#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: String to reverse.
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int c;/*Temporary variable to store the value at idx before  swaping*/
	int a, b;
	int l;

/* using swapping*/
	for (l = 0; s[l] != '\0'; l++)
	{

	}
	for (a = 0, b = l - 1; a < b; a++, b--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
