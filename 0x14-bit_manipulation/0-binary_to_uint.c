#include "main.h"

/**
 * binary_to_uint - Will converts a binary number to an unsigned int..
 * @b: Pointer to  a string of 0 and 1 ch..
 *
 * Return: The converted num of 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int b_binary = 1;
	unsigned int u_int = 0;


	for (; b != NULL && *b != '\0'; b++)
	{

		if (*b == '0')
		{

		}
		else if (*b == '1')
		{
			u_int = u_int | b_binary;
		}
		else
		{
			return (0);
		}

		b_binary = b_binary << 1;
	}

	return (u_int);
}
