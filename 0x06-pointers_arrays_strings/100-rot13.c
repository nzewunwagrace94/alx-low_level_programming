#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string pointer
 * Return: string function
 */
char *rot13(char *s)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lettersrot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; j < 65; j++)
		{
			if (s[i] == letters[j])
			{
				(s[i] = lettersrot13[j]);
				break;
			}
		}
	}
	return (s);

}
