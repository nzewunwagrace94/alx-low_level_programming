#include "main.h"

/**
 * _strspn - main function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the acceptable lenght of byte
 * Return: The number of bytes in the initial segment of 's'
 * that consist only of characters from 'accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
			{
				n++;
				break;
			}
			else if (accept[len + 1] != '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
