#include "main.h"

/**
 * *_memcpy - function of the prototype
 * @n: the number of the bytes to copy
 * @src: pointer to the source memory area
 * @dest: pointer to the destination memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
