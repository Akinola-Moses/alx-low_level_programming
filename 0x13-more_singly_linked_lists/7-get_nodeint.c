#include "lists.h"

/**
 * get_nodeint_at_index - Return nth node of the list.
 * @head: pointer to Head..
 * @index: The index of the node to return.
 *
 * Return: The said nth node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trans_loop;
	unsigned int idx_p;

	trans_loop = head;
	idx_p = 0;

	while (trans_loop)
	{
		if (idx_p == index)
		{
			return (trans_loop);
		}
		else
		{
			trans_loop = trans_loop->next;
			idx_p++;
		}
	}

	return (NULL);
}
