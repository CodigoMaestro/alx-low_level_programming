#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - entry point
 * @head: listint_t
 * Return: void
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
