#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees all nodes pointed to a pointer
 * to head
 * @head: pointer pointing to the address of head
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
