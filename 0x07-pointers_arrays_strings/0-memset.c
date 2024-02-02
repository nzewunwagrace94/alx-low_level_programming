#include "main.h"

/**
 * *_memset - funtion of the prototype
 * @n: the memory byte to be filled
 * @b: the constant byte used to fill the n byte
 * @s: the pointer
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
	return (0);
}
