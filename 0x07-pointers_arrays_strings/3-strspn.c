#include "main.h"
/**
 * _strspn - function returns the length of the initial substring of the string
 * pointed to by str1 that is made up of only those character contained in the
 * string pointed to by str2.
 * @s: string to be scanned.
 * @accept: string containing the characters to match
 * Return:  the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j, k;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{

	k = 0;
	while (accept[k] != '\0')
	{
		if (s[j] == accept[k])
			{
			i++;
			break;
			}
		k++;
	}
		if (accept[k] == '\0')
			break;
		j++;
	}
	return (i);
}
