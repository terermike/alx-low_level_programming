#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: an array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the 1st element for that cmp function doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
