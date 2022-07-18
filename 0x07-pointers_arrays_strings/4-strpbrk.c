#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept: This is the C string containing the characters to match
 * Return: returns a pointer to the character in str1 that matches
 * one of the characters in str2, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;
	char *ch;

	j = 0;
	while (s[j] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				ch = &s[j]
				return (ch);
			}
		k++;
		}
	j++;
	}
	return (0);
}
