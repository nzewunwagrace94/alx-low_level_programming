#include "main.h"

/**
 * _strspn - main function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the acceptable lenght of byte
 * Returns: The number of bytes in the initial segment of 's'
 * that consist only of characters from 'accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int bytes = 0;
	int i;


	while (*s)
	{
		for (bytes = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
