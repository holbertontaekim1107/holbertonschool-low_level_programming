#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fetches and returns nth node.
 * @head: - starting olist
 * @index: - limiter
 * Return: All nodes upto the limiter
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
