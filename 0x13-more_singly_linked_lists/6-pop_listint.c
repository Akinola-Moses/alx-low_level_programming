#include "lists.h"

/**
 * pop_listint - Deletes the head node and
 * return its data in case it's not empty.
 * @head: Pointer to the head.
 *
 * Return: The data or 0 as the case may be.
 */

int pop_listint(listint_t **head)
{
	listint_t *node_tp;
	int n_data;

	if (!*head)
	{
		return (0);
	}

	node_tp = *head;

	n_data = node_tp->n;

	*head = node_tp->next;

	free(node_tp);

	return (n_data);
}
