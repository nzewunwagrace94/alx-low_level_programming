#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the first number to compare
 * @m: seconf the number to compare
 * Return: the number (output)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
