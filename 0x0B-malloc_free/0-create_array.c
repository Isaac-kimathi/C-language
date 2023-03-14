#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of characters
 * @size: the size of the memory to be printed on
 * @c: the character to fill the memory allocated
 *
 * Return: a pointer or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
