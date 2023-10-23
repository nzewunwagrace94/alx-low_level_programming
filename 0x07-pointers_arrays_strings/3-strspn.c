#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: function parameter1
 * @accept: function parameter2
 * Return: 0 successful
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
		{
		if (s[i] == accept)
		return (s + i)
		}
	return (0);
}
