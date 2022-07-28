#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: base string
 * @s2: string to concatn chars
 * @n: number of chars of s2 to concat to s1
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k, l;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		;

	ptr = malloc((i + n + 1) * sizeof(*s1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0, l = 0; k < i + n; k++)
	{
		if (k < i)
			ptr[k] = s1[k];

		else
			ptr[k] = s2[l++];
	}
	ptr[k] = '\0';
	return (ptr);
}
