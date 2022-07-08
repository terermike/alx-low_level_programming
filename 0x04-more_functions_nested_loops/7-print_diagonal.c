#include "main.h"
/**
 * print_diagonalprint_diagonal - prints a diagonal line
 * @n: the nth times the \ should be printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		_putchar(10);

	_putchar(92);
	i++;
	}
	_putchar(10);
}
