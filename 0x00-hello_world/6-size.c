#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of char: %zu byte\n", sizeof(char));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("size of double: %zu bytes\n", sizeof(double));
	return (0);
}
