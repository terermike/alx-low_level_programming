#include "main.h"
/**
 * more_numbers - prints numbers 0 - 14 10 times.
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			_putchar(i / 10 + '0');

		_putchar(i % 10 + '0');
		i++;
		}
	j++
	_putchar(10);
	}
}
