#include "main.h"

/**
 * set_bit -function that sets the value of a bit to 1 at a given index.
 * @n: number of bit
 * @index: is the index, starting from 0
 * Return: position of the bit to be manipulated
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
