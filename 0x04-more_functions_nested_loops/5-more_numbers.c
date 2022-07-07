#include "main.h"
/**
 * more_numbers - prints a*10
 *
 *Return: nothing
 */
void more_numbers(void)
{
	int a;

	a = 0;
	while (a < 15)
	{
		_putchar((a * 10) + '0');
	a++
	}
	_putchar(10);
}
