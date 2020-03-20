#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of nodes and returns total count of nodes
 * @h: -> pointer to the nodes
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
