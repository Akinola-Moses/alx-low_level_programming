#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Adds a newnode at the
 * end.
 * @head: Pointer to head..
 * @str: The string.
 *
 * Return: The adress or NULL.
 */

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_n, *node_l;
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

	node_n->next = NULL;

	if (!*head)
	{
		*head = node_n;
	}
	else
	{
		node_l = *head;

		for (; node_l->next; node_l = node_l->next)
		{

		}

		node_l->next = node_n;
	}

	return (node_n);
}
