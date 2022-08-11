#include "lists.h"
#include "stdlib.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to 1st node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;
	
	if (current == NULL)
		return (count);
	while (current != NULL)
	{
	printf("[%d] %s\n", current->len, current->str);
	current = current->next;
	count++;
	}
	return (count);
}