#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 shows success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
