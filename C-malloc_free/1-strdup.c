#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to be duplicated
 *
 * Return: the string duplicated, else null
 */
char *_strdup(char *str)
{
	int i =  1;
	int x = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
