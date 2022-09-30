#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given 
 * position.
 * @h: pointerto the doubly linked list.
 * @idx: position to insert node.
 * @n: data to store at node.
 * Return:  address of the new node, or NULL if it failed
 */ 
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *new, *next, *ptr = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!h && idx == 0)
	{
	new->next = NULL;
	new->prev = NULL;
	return (new);
	}
	else
	{
	while (ptr->prev)
		ptr = ptr->prev;
	while (idx - 1 > 0 && ptr)
		ptr = ptr->next;
	next = ptr->next;
	ptr->next = new;
	new->next = next;
	new->prev = ptr;
	if (!ptr->next)
	{
	new->next = NULL;
	new->prev = ptr;
	ptr->next = new;
	return (new);
	}
	}
	return (new);
}
