#include "main.h"

/**
 * *_strstr - main function that locates a substring
 * @needle: the substring to be searched
 * @haystack: the string to be searched
 * Return: '\0' to be terminated if string not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

