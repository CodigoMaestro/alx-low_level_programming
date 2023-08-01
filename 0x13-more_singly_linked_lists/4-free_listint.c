#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - entry point
 * @head: listint_t
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *current;

	temp = head;

	while (current != NULL)
	{
		current = temp;
		current = current->next;
		free(temp->n);
		free(temp);
	}
}
