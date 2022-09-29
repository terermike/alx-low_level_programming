#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: head of the list.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (!head)
		return;
	while (ptr->prev)
		ptr = ptr->prev;

	while (ptr)
	{
	head = ptr;
	ptr = ptr->next;
	free(head);
	}
}
