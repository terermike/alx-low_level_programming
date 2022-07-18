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
	char *ch;

	for (ch = dest; n > 0; src++, dest++, n--)
	{
		*dest = *src;
	}
	return (ch);
}
