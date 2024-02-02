#include "main.h"

/**
 * *create_array - function that create an array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		arr[count] = c;
	return (arr);
}
