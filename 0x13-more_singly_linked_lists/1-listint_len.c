#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list(int).
 * @h: The head of the node.
 *
 * Return: The number of the elements in the list(int).
 */

size_t listint_len(const listint_t *h)
{
	size_t elmnt_n_int = 0;

	for (; h != NULL; h = h->next)
	{
		elmnt_n_int++;
	}

	return (elmnt_n_int);
}
