#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * @atoi: convert string to an integer
 * Return: 0 (Successfu), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argc[1]);
	y = atoi(argc[2]);

	result = x * y;

	printf("%d\n", x * y);

	return (0);
}

