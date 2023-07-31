#include "lists.h"
#include <stddef.h>

/**listint_len - entry point
 * @h: listint_t
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
