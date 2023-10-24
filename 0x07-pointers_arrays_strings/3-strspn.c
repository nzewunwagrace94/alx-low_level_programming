#include "main.h"

/**
 * _strspn - main function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the acceptable lenght of byte
 * Return: The number of bytes in the initial segment of 's'
 * that consist only of characters from 'accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}

