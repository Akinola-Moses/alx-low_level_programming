#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - As the name implies.
 * @separator: String to be printed in between the strings.
 * @n: The numbers of strings passed.
 * @...: Ellipsis.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx = 0;
	const char *s;

	va_start(ap, n);

	idx = 0;
	while (idx < n)
	{
		s = va_arg(ap, const char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}


		if (idx < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		idx++;
	}
	va_end(ap);
	printf("\n");
}
