#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	if (!h)
	return (n);

	while (ptr && ptr->prev)
	ptr = ptr->prev;
	while (ptr)
	{
	printf("%d\n", ptr->n);
	n++;
	ptr = ptr->next;
	}
	return (n);
}
