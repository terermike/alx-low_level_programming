#include "main.h"
/**
 * _islower - function to determine whether a letter is small or capital.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
