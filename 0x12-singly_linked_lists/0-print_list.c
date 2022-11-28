#include "list.h"
#include <stdio.h>

/**
 * print_list - unction that prints all the elements of a list_t list
 * @h: name of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
