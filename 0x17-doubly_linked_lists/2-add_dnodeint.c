#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint
 * _t list.
 * @head: head of a doubly linked list.
 * @n: data of type int to store in the list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	while (ptr && ptr->prev)
	{
	ptr =	ptr->prev;
	}
	*head = ptr;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
