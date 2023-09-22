#include "lists.h"

/**
 * list_len - Returns the number of elements in the list.
 * @h: THE HEAD.
 *
 * Return: The len.
 */

size_t list_len(const list_t *h)
{
	size_t elmnt_n = 0;

	for (; h != NULL; h = h->next)
	{
		elmnt_n++;
	}

	return (elmnt_n);
}
