#include "main.h"
/**
 * _isdigit - function that checks for uppercase character
 * @c: an int parameter
 * Return: Returns 1 if c is digit returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	return (1);
	else
	return (0);
}
