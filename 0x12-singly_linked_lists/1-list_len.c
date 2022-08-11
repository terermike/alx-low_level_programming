#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linkd list
 * @h: hed to a linked list
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
	ptr = ptr->next;
	n++;
	}
	return (n);
}
