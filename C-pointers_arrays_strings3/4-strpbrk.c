#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
			return (s);
		}
		s++;
	}

	return ('\0');
}
