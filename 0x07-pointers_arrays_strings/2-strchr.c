#include "main.h"

/**
 * *_strchr - the main functiom
 * @c: the pointer to the first occurance of character
 * @s: the string containing the character
 * Return: the pointer c or null if not found
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}

