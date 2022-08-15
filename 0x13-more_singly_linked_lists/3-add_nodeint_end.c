#include "lists.h"
/**
 * add_nodeint_end - functin adds a new node at the end of a listint_t list.
 * @head: a poimter of a head of a singly linked list.
 * @n: number to be stored
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
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

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = h;
	return (*head);
	}
	else
	return (NULL);
}
