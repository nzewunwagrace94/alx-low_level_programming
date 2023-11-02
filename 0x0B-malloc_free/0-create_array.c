#include "main.h"

/**
 * create_array - a function that create an array of char
 * @size: of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	 char *ptarray;
	 unsigned int count;

	 /*allocate memory space for the all the arrays*/
	 ptarray = malloc(sizeof(char) * size);

	 /*check if malloc does not return NULL */
	if (ptarray == NULL)
		return (NULL);

	 /*put char in each of the space allocated*/
	count = 0;
	while (count < size)
		count++;

	/*assigning char to the specific memory location*/

		ptarray[count] = c;

	return (ptarray);
}
