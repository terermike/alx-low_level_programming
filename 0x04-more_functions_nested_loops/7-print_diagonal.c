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
		if (n <= 0)
			_putchar(10);

		_putchar(92);
		i++;
	}
	_putchar(10);
}
