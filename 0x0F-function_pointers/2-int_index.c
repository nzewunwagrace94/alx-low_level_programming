#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - funtion that search for an integer
 * @array: the array
 * @size: size of array
 * @cmp: function pointers
 * Return: index of the matched character or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
