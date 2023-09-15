#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - Prints anything...
 * @format: Types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	char c;
	int i, idx = 0;
	float f;
	char *s;
	va_list ap;

	va_start(ap, format);
	while (format && format[idx])
	{
		c = format[idx];
		idx++;
		switch (c)
		{
			case 'c':
				i = va_arg(ap, int);
				printf("%c", i);
				break;

			case 'i':
				i = va_arg(ap, int);
				printf("%i", i);
				break;

			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(ap, char *);

				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				continue;
		}

		if (format[idx] != '\0')
		{
			printf(", ");
		}
	}

	va_end(ap);
	printf("\n");
}
