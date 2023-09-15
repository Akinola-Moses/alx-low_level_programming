#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the parameter.
 * @n: The number of parameters.
 * @...: Ellipsis.
 *
 * Return: The sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int idx = 0, sum = 0;

	va_start(ap, n);


	if (n == 0)
	{
		return (0);
	}

	while (idx < n)
	{
		sum = sum + va_arg(ap, int);
		idx++;
	}
	va_end(ap);
	return (sum);
}
