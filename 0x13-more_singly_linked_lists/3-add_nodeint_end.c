#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - entry point
 * @head: list
 * @n: int
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	current = malloc(sizeof(struct listint_s));
	if (current == NULL)
	{
		return (NULL);
	}
	temp = *head;

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = current;
	}

	return (current);
}
