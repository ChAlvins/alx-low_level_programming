#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: A pointer to the list_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *mm;

	while (head != NULL)
	{
		mm = head->next;
		free(head);
		head = mm;
	}
}
