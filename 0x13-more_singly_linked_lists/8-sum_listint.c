#include "lists.h"

/**
 * sum_listint - Perform addition on the all the
 * data of a list(return the sum)..
 * @head: pointer to Head..
 *
 * Return: The sum of all..
 */

int sum_listint(listint_t *head)
{
	listint_t *trans_loop;
	int sum_of_d;

	trans_loop = head;
	sum_of_d = 0;

	while (trans_loop)
	{
		sum_of_d = sum_of_d + trans_loop->n;
		trans_loop = trans_loop->next;
	}

	return (sum_of_d);
}
