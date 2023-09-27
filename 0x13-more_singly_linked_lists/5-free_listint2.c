#include "lists.h"

/**
 * free_listint2 - Free this list.
 * @head: Pointer to the head.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *node_tp, *trans_loop = *head;

	while (trans_loop)
	{
		node_tp = trans_loop->next;

		free(trans_loop);

		trans_loop = node_tp;
	}

	*head = NULL;
}
