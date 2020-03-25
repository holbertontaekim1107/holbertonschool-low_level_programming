#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts and returns num of nodes
 * @h: imports struct with singly linked lists
 * Return: Max nodecount
 */

size_t listint_len(const listint_t *h)
{
	size_t nodecount;

	if (h)
	{
		for (nodecount = 0; h != NULL; nodecount++)
		{
			h = h->next;
		}
	}
return (nodecount);
}
