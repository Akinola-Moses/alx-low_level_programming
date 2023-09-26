#include "lists.h"

/**
 * print_listint - Print all elements of a list (int).
 * @h: The head.
 *
 * Return: The number of nodes...
 */

size_t print_listint(const listint_t *h)
{
	size_t node_int = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		node_int++;
	}

	return (node_int);
}
