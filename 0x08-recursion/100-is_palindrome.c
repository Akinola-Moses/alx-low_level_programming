#include "main.h"

/**
 * is_palindrome - Checks for palindrome.
 * @s: The string.
 *
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (my_plde(s, 0, my_strlen(s)));
}
/**
 * my_strlen - Check for the lenght.
 * @s: The string.
 *
 * Return: l.
 */
int my_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (my_strlen(s + 1)));
}

/**
 * my_plde - Checks for palindrome.
 * @s: The string.
 * @idx: the idx.
 * @l: lenght.
 *
 * Return: 1 or 0.
 */
int my_plde(char *s, int idx, int l)
{

	if (*(s + idx) != *(s + l - 1))
	{
		return (0);
	}
	else
	{
		if (idx >= l)
		{
			return (1);
		}
		else
		{
			return (my_plde(s, idx + 1, l - 1));
		}
	}
}
