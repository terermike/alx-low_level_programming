#include "main.h"
/**
 * print_line - prints a line
 * @n: an int parameter
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}
