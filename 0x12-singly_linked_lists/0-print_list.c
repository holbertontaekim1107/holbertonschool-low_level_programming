#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements
 * @h: -> pointer to node
 * Return: Index and how many nodes it went through
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len,  h->str);
			h = h->next;
	}
return (count);
}
