#inclide "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: ist int to be swapped
 * @b: 2nd int to be swapped
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	a = *b;
	b = c;

}
