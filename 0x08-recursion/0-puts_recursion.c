#include "main.h"

/**
 * _puts_recursion - main function that prints a string
 * @s: the string to be printed
 * Return: 0 always as successful
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
