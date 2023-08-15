#include "main.h"

/**
 * _isalpha - Checks for alpha character.
 * @c: character to check.
 * Return: Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
