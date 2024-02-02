#include "main.h"

/**
 * _pow_recursion - funtion that returns value of y
 * @x: return value
 * @y: the raised to the power value
 * Return: factorial
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
