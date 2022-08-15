#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: head of a singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	if (h === NULL)
		return;
	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
