#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list.
 * @head: As the name implies.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *node_t;

	while (head)
	{
		node_t = head;
		head = head->next;

		if (node_t->str)
		{
			free(node_t->str);
		}

		free(node_t);
	}
}
