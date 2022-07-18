#include "main.h"
/**
 * _strstr -  function returns pointer to the first occurrence of the string
 * in a given string
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (haystack != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0' &&
		needle[j + k] == haystack[i + k])
		{
			if (needle[j + k] != haystack[i + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return	(&haystack[i]);
		j++;
		i++;
	}
	return (null);
}
