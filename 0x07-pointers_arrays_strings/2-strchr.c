#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: This is the C string to be scanned.
 * @c: This is the character to be searched in str
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
