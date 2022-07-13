#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
	i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

