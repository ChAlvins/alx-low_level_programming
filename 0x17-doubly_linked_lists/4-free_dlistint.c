#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the beginning of the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_temp;

	while (head != NULL)
	{
		free_temp = head->next;
		free(head);
		head = free_temp;
	}
}
