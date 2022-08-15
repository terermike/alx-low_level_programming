#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to a head of a singly linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
