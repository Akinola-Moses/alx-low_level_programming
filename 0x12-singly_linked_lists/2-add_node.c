#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Adds a newnode at the
 * begining.
 * @head: Pointer to head..
 * @str: The string.
 *
 * Return: The adress or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_n;
	unsigned int l = 0;


	if (!head && !str)
	{
		return (NULL);
	}

	node_n = malloc(sizeof(list_t));
	if (!node_n)
	{
		return (NULL);
	}

	node_n->str = strdup(str);

	if (!node_n->str)
	{
		return (NULL);
		free(node_n);
	}

	while (node_n->str[l] != '\0')
	{
		l++;
	}

	node_n->len = l;

	node_n->next = *head;
	*head = node_n;
	return (node_n);
}
