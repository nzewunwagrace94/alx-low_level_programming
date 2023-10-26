#include "main.h"

/**
 * factorial - main function that returns factorial of a given number
 * @n: parameter1
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
