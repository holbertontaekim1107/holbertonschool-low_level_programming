#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums of all nodes
 * @head: imports first node
 * Return: 0 if head's null else the max sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int node;
	int sum = 0;

	if (head)
	{
		for (node = 0; temp != NULL; node++)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}
return (sum);
}
