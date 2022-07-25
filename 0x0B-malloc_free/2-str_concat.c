#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to new memory location containing both strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ch = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ch == NULL)
		return (NULL);
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			ch[c] = s1[c];
		else
			ch[c] = s2[d++];
	}

	return (ch);
}
