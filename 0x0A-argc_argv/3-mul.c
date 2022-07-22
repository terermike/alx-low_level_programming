#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char **argv)
{
	(void) argc;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
}
