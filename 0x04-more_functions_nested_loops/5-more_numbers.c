#include "main.h"
/**
 * more_numbers - prints a*10
 *
 *Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{

		b = 0;
		while (b < 15)
		{
			if (b > 9)
			_putchar((b / 10) + '0');

			_putchar((b % 10) + '0');
		b++;
		}
		a++;
		_putchar(10);
	}
	_putchar(10);
}
