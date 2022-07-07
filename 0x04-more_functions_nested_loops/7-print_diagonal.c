#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: int parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('/');
		i++;
	}
	_putchar(10);
}
