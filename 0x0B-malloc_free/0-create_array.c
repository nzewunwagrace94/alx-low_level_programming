#include "main.h"

/**
 * create_array - a function that create an array of char
 * @size: of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	 char *array;
	 unsigned int count;

	if (size == 0)
		return (NULL);

	 /*allocate memory space for the all the arrays*/
	array = malloc(sizeof(char) * size);

	 /*check if malloc does not return NULL */
	if (array == NULL)
		return (NULL);

	 /*put char in each of the space allocated*/
	count = 0;
	while (count < size)
		count++;

	/*assigning char to the specific memory location*/
		array[count] = c;
	return (array);
}
