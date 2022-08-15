#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: head of a singly linked list.
 * Return: returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	 size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}
	return (count);
}
