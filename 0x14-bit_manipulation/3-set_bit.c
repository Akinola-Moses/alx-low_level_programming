#include "main.h"

/**
 * set_bit - Will set the value of a bit to 1 at the given index..
 * @n: The number..
 * @index: The index of the number.
 *
 * Return: Return 1 ,or -1 to
 * indicate error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int get_n;
	unsigned int calc_bit;

	calc_bit = 8 * sizeof(*n);

	if (index >= calc_bit)
	{
		return (-1);
	}

	get_n = 1UL << index;

	*n |= get_n;

	return (1);
}
