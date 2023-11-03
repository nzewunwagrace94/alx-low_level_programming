#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size of memory allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *malloc_checked;

	malloc_checked = malloc(b);
	if (malloc_checked == NULL)
		exit(98);
	else
		return (malloc_checked);
}
