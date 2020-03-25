#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all intelements from listint_t struct
 * @h: imports the struct
 * Return: number of nodes it went through
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	if (h)
	{
		for (node = 0; h != NULL; node++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
return (node);
}
