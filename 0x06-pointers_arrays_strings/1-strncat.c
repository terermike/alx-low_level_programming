#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings
 * it will use at most n bytes from src; and
 *src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: parameter of type int
 * Return: pointer to resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	i++;
	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		n--;
		i++;
	}
	return (dest);

}
