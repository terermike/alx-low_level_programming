#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size:  size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(*ch));
		if (ch == 0)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
