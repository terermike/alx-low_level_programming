#include "main.h"
/**
 * print_numbers - printsnumbers from 0 to 9, followed by a new line
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 9)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
