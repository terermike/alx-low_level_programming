#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if a success
*/

int main(void)
{
	int digit_1;
	int digit_2;
	int digit_3;
	
	for (digit_1 = 0; digit_1 <= 9; digit_1++)
	{
		for (digit_2 = 0; digit_2 <= 9; digit_2++)
		{
			for (digit_3 = 0; digit_3 <= 9; digit_3++)
			{
			putchar((digit_1 % 10) + '0');
			putchar((digit_2 % 10) + '0');
			putchar((digit_3 % 10) + '0');
				if ( digit_1 == 7 && digit_2 == 8 && digit_3 ==9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
