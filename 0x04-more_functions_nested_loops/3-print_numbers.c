#include "main.h"
/**
 * print_numbers - prints 0 to 9 followed by a new line
 *
 * Return: nothing
 */
void print_numbers(void)
{

	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar(10);
}
