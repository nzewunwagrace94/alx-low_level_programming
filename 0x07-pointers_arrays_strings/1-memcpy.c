#include "main.h"

/**
 * *_memcpy - function of the prototype
 * @n: the number of the bytes to copy
 * @src: pointer to the source memory area
 * @dest: pointer to the destination memory area
 * Returns: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int a = n;

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
