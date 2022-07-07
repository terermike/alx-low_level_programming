#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: an int parameter
 * Return: Returns 1 if c is uppercase returns 0 otherwise
 */
int _isupper(int c)
{
	int c;

	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
