#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position. if it is not possible to add the new node at index idx, do not
 * add the new node and return NULL
 * @head: double pointer to an head of a singly linked list
 * @idx:  the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the index of the list where the new node should be added.
 * Index starts at 0
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	new->next = NULL;

	ptr = *head;
	if (ptr)
	{
	while (i < idx - 1)
	{
	i++;
	ptr = ptr->next;
	}
	tmp = ptr->next;
	ptr->next = new;
	new->next = tmp;
	}
	return (*head);
}
