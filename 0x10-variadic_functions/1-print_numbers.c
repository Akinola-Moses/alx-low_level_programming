#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - As the name implies.
 * @separator: String to be printed in between the nums.
 * @n: The numbers.
 * @...: Ellipsis.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx = 0, nb = 0;

	va_start(ap, n);

	idx = 0;
	while (idx < n)
	{
		nb = va_arg(ap, int);
		printf("%i", nb);
		idx++;

		if (idx >= n - 1 && separator == NULL)
		{
			return;
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
