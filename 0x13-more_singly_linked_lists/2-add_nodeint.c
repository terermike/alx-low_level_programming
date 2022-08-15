#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list.
 * @head: poimter to the head of a sinl limked list
 * @n: int to be stored
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h, *ptr;

	h = malloc(sizeof(listint_t));
	if (h)
	{
	h->n = n;
	h->next = NULL;

	if (!(*head))
	{
	*head = h;
	return (*head);
	}
	ptr = *head;
	*head = h;
	h->next = ptr;
	return (*head);
	}
	else
	return (NULL);

}
