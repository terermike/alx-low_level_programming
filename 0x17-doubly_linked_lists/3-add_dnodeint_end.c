#include "lists.h"
/**
 * add_dnodeint_end -	function that adds a new node at the end of a
 * dlistint_t list.
 * @head: a double-pointer to a doubly linked list.
 * @n: data to store.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!ptr)
	{
	new->prev = NULL;
	*head = new;
	return (*head);
	}
	else
	{
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;
	*head = new;
	return (*head);
	}
}
