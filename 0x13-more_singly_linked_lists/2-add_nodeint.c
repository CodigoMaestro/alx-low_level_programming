#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - entry point
 * @head: listint_t
 * @n: int
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(struct listint_s));

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
