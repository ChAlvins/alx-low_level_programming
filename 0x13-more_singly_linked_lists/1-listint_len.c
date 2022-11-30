#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: elements linked
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
