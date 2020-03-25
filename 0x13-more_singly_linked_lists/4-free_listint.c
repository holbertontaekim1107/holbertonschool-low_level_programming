#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees listint_t list.
 * @head: Pointer to head of listint_t list to be freed.
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
