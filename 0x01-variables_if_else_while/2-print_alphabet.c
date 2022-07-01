#include <stdio.h>
/**
 * main - the main function
 *
 *Return: Returns 0 if it is a success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar(10);
	return (0);
}
