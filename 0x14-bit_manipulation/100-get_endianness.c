#include "main.h"

/**
 * get_endianness - Can check th endianess.
 *
 * Return: 1 or 0.
 */

int get_endianness(void)
{
	char *p;
	int n;

	p = (char *)&n;
	n = 1;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
