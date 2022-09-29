#include "lists.h"
/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the list.
 * Return: summed elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
