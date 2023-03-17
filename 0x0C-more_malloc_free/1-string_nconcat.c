#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: unsigned int
 *
 * Return: A pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	unsigned int len = n, index;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (index = 0; s1[index]; index++)
	len++;

	q = malloc(sizeof(char) * (len + 1));

	if (q == NULL)
	return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
	q[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
	q[len++] = s2[index];
	q[len] = '\0';

	return (q);
}
