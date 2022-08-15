#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: An address of the head of a singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr)
	{
	tmp = ptr->next;
	free(ptr);
	ptr = tmp;
	}
	*head = NULL;

}
