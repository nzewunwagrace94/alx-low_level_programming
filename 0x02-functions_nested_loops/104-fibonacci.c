#include <stdio.h>
/**
 * main - program to find first 50 fibonacci number
 * return: 0
 */
int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;

	printf("%li, ", term1);
	for (i = 1 ; < 50 ; i++)
	{
		printf("%lu, ", term1);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 49)
			printf(", ");
	}
	pritf("\n");
	return (0);
}
