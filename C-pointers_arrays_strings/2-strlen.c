#include "main.h"
#include <string.h>

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to be passed to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	return (lng);
}
