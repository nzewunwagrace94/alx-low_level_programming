#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of array members
 * @size: size of array
 * Return: pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	_calloc = calloc(nmemb, size);
	if (_calloc == NULL)
		return (NULL);
	else
		return (_calloc);

}
