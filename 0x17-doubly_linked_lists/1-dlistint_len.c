#include "lists.h"

/**
 * dlistint_len -  function returning number of elements in a linked lists
 * @h: pointer to begining of linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
