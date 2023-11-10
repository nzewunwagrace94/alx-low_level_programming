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

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
