#include <stdio.h>

/**
 * main - program runs in main
 *
 * Return: returns  0 when successful
 */

int main(void)

{

	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if ( ch != 'e' && ch != 'q')
	putchar(ch);
	}
	putchar(10);
	return (0);
}
