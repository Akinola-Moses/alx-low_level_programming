#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the begining of a list(int).
 * @head: Pointer to HEAD.
 * @n: The int.
 *
 * Return: NULL or thr address of the   new  element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *node_n;

		node_n = malloc(sizeof(listint_t));

		if (!node_n)
		{
			return (NULL);
		}

		node_n->n = n;

		node_n->next = *head;
		*head = node_n;
		return (node_n);
}
