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
	int q, w, e = 0, r = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (q = 0; q < ac; q++)
	{
	for (w = 0; av[q][w]; w++)
		r++;
	}
	r += ac;
	str = malloc(sizeof(char) * r  + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	r ((w = 0); av[q][w]; w++)
	{
		str[e] = av[q][w];
		e++;
	}
	if (str[e] == '\0')
	{
	str[e++] = '\n';
	}
	}
	return (str);
}
