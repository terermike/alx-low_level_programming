#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter of type char
 * Return: 0
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
