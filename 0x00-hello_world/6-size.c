#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of int: %zu 4 bytes\n", sizeof(int));
	printf("size of char: %zu 1 byte\n", sizeof(char));
	printf("Size of float: %zu 4 bytes\n", sizeof(float));
	printf("size of double: %zu 4 bytes\n", sizeof(double));
	return (0);
}
