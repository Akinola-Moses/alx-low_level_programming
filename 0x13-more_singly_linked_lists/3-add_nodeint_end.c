#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a list(int).
 * @head: Pointer (**)to HEAD.
 * @n: The int.
 *
 * Return: NULL or thr address of the   new  element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *node_n, *l_node;

		node_n = malloc(sizeof(listint_t));

		if (!node_n)
		{
			return (NULL);
		}

		node_n->n = n;

		node_n->next = NULL;

		if (!*head)
		{
			*head = node_n;
		}
		else
		{
			l_node = *head;

			for (; l_node->next; l_node = l_node->next)
			{

			}
			l_node->next = node_n;
		}

		return (node_n);
}
