#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: int parameter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	if (dest[i] != '\0')
		dest[i] = '\0';

	return (dest);
}
