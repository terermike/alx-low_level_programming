#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @string: string
 * Return: string `s` rotated
 */
char *rot13(char *string)
{
	int count = 0, num;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(string + count) != '\0')
	{
		for (num = 0; num < 52; num++)
		{
			if (*(string + count) == alphbt[num])
			{
				(*(string + count) = rot13[num]);
				break;
			}
		}
		count++;
	}
	return (string);
}
