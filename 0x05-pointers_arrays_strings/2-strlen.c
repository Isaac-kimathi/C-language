#include "main.h"
#include <string.h>

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to be passed to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int lng;

	for(*s != '\0'; s++)
	{
		lng += 1;
	}
	return (lng);
}
