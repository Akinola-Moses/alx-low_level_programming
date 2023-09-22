#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all elment of a list.
 * @h: The pointer to the HEAD.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node_n = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}

	for (; h != NULL; h = h->next)
	{
		printf("[%u] %s\n", h->len, h->str);
		node_n++;
	}

	return (node_n);
}
