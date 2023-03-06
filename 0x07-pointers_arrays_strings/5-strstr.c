#include "main.h"

/**
 * _strstr - a function  that locates a substring
 * @needle: substring to be located
 * @haystack: string to be searched
 * Return: a pointer or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *x = needle;

		while (*u == *x && *x != '\0')
		{
			u++;
			x++;
		}
		if (*x == '\0')
			return (haystack);
	}
	return (0);
}
