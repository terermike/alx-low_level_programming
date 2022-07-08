#include "main.h"
/**
 * print_diagonal - print_diagonal - prints a diagonal line
 * @n: the nth times the \ should be printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
		_putchar(' ');
		j++;
		}

	_putchar(92);
		if (i < (n - 1))
		_putchar(10);

	i++;
	}
	_putchar(10);
}
