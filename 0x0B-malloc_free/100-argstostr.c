#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of my program.
 * @ac:
 * @av:
 *
 * Return: a pointer to a new string, or NULL if it falls
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, y, d, size = ac;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (y = 0; av[a][y]; y++)
		size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
	return (NULL);

	d = 0;

	for (a = 0; a < ac; a++)
	{
	for (y = 0; av[a][y]; y++)
	s[d++] = av[a][y];
	s[d++] = '\n';
	}

	s[size] = '\0';

	return (s);
}
