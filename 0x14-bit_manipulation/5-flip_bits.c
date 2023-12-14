#include "main.h"

/**
 * flip_bits - Will return the number of bits you would
 * need to flib to get fom one num to the other...
 * @n: num 1.
 * @m: num 2.
 *
 * Return: Return 1 ,or -1 to
 * indicate error.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp_num;
	unsigned int calc_idx = 0;

	comp_num = n ^ m;

	while (comp_num)
	{
		calc_idx += comp_num & 1;
		comp_num = comp_num >> 1;
	}

	return (calc_idx);
}
