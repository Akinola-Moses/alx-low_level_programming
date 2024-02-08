#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specifies index..
 * @n: The number..
 * @index: The index of the number.
 *
 * Return: Return its value or -1 to
 * indicate error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int n_bit;
	unsigned long int get_n, calc_bit;

	calc_bit = 8 * sizeof(n);

	if (index >= calc_bit)
	{
		return (-1);
	}

	get_n = 1UL << index;

	n_bit = ((n & get_n) >> index);

	return (n_bit);
}
