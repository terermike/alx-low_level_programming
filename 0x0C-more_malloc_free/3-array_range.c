#include "main.h"
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	i = max - min;
	p = malloc((i + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (j = 0; min <= max; j++, min++)
	{
		p[j] = min;
	}
	return (p);
}
