#include <stdio.h>

/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always as successful
 */

int main(int argc, char *argv[])
{	
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
