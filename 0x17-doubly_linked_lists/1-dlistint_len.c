#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: pointer to a doubly linked list
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
	return (n);
	while (h && h->prev)
	h = h->prev;
	while (h)
	{
	h = h->next;
	n++;
	}
	return (n);
}
