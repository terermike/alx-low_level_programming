#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to a doubly linked list.
 * @index: nth index to return.
 * Return: nth index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (index > 0)
	{
	head = head->next;
	index--;
	}
	return (head);
}
