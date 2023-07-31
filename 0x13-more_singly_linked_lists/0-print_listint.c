#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - entry point
 * @h: listint
 * Return: n
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
