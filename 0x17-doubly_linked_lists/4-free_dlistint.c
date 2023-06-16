#include "lists.h"

/**
 * free_dlistint - this free a dlistint_t list
 * @head:this is  doubly linkedlist
 * Return: returns nothing, just free everything
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;

	while (head)
	{
		actual = head;
		head = actual->next;
		free(actual);
	}
}
