#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: String to be copied.
 * Return:  a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	char *ch;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	ch = malloc(i * sizeof(*ch) + 1);
	if (ch == NULL)
		return (NULL);
	for (j = 0; j < i; j++)

		ch[j] = str[j];
	ch[j] = '\0';

	return (ch);
}
