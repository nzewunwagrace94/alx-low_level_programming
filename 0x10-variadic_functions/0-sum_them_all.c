#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all it's parameters.
 * @n: number of parameters passed to the function
 * Return: sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args; /* declare variable and  va_arg datatype */

	if (n == 0)
		return (0);

	va_start(args, n); /* initializing var argument */

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args); /* end args */

	return (sum);
}
