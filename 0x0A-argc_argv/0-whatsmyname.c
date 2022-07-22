#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments passed in the command line
 * @argv: pointer array
 * Return: 0 on success
 */
int main (int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
