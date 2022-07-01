#include <stdio.h>
/**
 * main - runs the progaram
 *
 * Return: returns 0 if it is a success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
