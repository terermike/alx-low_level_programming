#include "main.h"
/**
 * _memset() - function that fills memory with a constant byte
 * @s: an array of type char
 * @b: parameter of constant byte b
 * @n: parameter of type int
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
