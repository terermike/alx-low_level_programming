#include <stdio.h>
/**
 * main - main function
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: o if a success
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 101)
	{
		if (i % 3 == 0)
		printf(Fizz);
		else if (i % 5 == 0)
		printf(Buzz);
		else if (i % 5 == 0 && i % 3 == 0)
		printf(FizzBuzz);
		else
		printf("%d", i)

		if (i != 100)
		printf(" ");


	i++;
	}
	printf('\n');
	return (0);
}



