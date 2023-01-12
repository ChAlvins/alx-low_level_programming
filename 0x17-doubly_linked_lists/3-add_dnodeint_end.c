#include "lists.h"

/**
 * add_dnodeint_end - function adding new node at the end of linked list
 * @head: double ptr ot beginning of the list
 * @n: value to add to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	else
	{
		while (end_node->next)
			end_node = end_node->next;
		end_node->next = new_node;
		new_node->prev = end_node;
	}
	return (new_node);
}
