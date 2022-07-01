#include <stdio.h>

/**
  * main - program runs in main
  *
  * Return: returns  0 when successful
  */

int main(void)

{

	int ch;
	int uc;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
	putchar(uc);
	}
	putchar('\n');
	return (0);
}
