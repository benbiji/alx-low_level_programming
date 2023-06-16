#include "lists.h"

/**
 * sum_dlistint - this is the sum of all nodes of doubly linkedlist
 * @head: this is doubly linkedlist
 * Return: this return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int acumm = 0;

	if (!head)
		return (0);

	while (head)
	{
		acumm += head->n;
		head = head->next;
	}

	return (acumm);
}
