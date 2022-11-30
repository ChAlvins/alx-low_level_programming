#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - Adding new node at the end of a listint_t list.
 * @head: A pointer the head of the list
 * @n: The integer to be added to the list
 * Return: If the function fails - NULL
 * Otherwise - the address of the newnode element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new_node;
	return (new_node);
}
