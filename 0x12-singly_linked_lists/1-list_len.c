#include "lists.h"

/**
 * size_t list_len - function returns number of elements in linked list_t list
 * @h: Pointer to the head node of the linked list
 * Return: size_t, the number of nodes in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
