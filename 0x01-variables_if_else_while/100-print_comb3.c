#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if successful
 */
int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 0; digit_1 <= 8; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 9; digit_2++)
		{
		putchar((digit_1 % 10) + '0' );
		putchar((digit_2 % 10) + '0');
		putchar (',');
		putchar (' ');
		}
	}
	putchar('\n');
	return(0);
}
