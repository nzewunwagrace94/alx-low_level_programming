#include "main.h"


/**
 * _strlen_recursion - function that returns the lenght of a string
 * @s: the string to be return
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	return (0);
}
