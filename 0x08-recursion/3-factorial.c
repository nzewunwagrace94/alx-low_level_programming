#include "main.h"

/**
 * factorial - main function that returns factorial of a given number
 * @n: parameter1
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
	
		return (n * factorial(n - 1));
	}
	return (0);

}
