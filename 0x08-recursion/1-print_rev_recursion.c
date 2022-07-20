#include "main.h"
/**
 *
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	while ( s[i] != '\0')
	{
	_putchar(s[i - 1]);
	_putchar(s[--i]);
	i++;
	}
}
