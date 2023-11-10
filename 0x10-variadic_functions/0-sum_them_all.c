#include "variadic_functions.h"

/**
 * sum_them_all - sun all parameter passed to the function
 * @n: number of argument to be passed to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, const unsigned int);
		}
	}
	va_end(args);
	return (sum);
}
