#include "lists.h"

/**
 * sum_dlistint - function returning sum of all data (n) of linked list
 * @head: ptr to begining of a list
 * Return: sum of all the data (n) of a dlistint_t linked list
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
