#include "main.h"

/**
 * *_strpbrk - it searches a string for any a set of bytes
 * @_strpbrk(): locates the first string that occur
 * @s: the string of any bytes
 * @accept: the acceptable string
 * Return: null if string not found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}
