#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int lngth = 0, a;

	while (dest[lngth])
		lngth++;
	for (a = 0; src[a] != '\0'; a++)
	{
	dest[lngth] = src[a];
	lngth += 1;
	}
	dest[lngth] = '\0';
	return (dest);
}
