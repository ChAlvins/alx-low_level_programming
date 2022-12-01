#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- function that deletes
 * the head node of a listint_t.
 * @head: double pointer to the list_t list
 * Return: The head node data n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (number);
}
