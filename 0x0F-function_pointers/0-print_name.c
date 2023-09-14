#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints name.
 * @name:The name to print.
 * @f: Pointer to function.
 *
 * Return: Noithing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
