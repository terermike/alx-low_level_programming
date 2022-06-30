#include <stdio.h>
/**
 * main - Main function
 * @i: First operand
 * @f: Second operand
 * @c: Third operand
 * @l: Fourth operand
 * @b: Fifth operand
 *
 * Return: 0 if it is a success
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int l;
	long long int b;

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int);
	printf("Size of a float: %i byte(s)", sizeof(float));
	return (0);
}
