#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: - address to head
 * Return: Returns saved value of original head had stored
 */
int pop_listint(listint_t **head)
{
	int headofn;
	listint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	temp = *head;
	headofn = temp->n;
	*head = (*head)->next;

	free(temp);

return (headofn);
}
