#include "lists.h"

/**
 * free_listint - Free this list.
 * @head: Pointer to the head.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *node_t;

	while (head)
	{
		node_t = head;

		head = head->next;

		free(node_t);
	}
}
