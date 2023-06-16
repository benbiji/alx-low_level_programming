#include "lists.h"

/**
 * dlistint_len - this return length of linkedlist
 * @h: this is doubly linkedlist
 * Return: returns number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;

	return (length);
}
