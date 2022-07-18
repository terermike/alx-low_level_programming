#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: This is the C string to be scanned.
 * @c: This is the character to be searched in str
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	ret = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
		else
			return (NULL);
	}
}
