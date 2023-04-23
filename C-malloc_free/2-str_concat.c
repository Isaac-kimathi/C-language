#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string1.
 * @s2: pointer to string2.
 * Return: NULL on failure, pointer of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int q = 0, w = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[q])
		q++;
	while (s2[w])
		w++;
	y = q + w;
	s = malloc(sizeof(char) * (q + w + 1));

	if (s == NULL)
	return (NULL);

	w = 0;
	while (x < y)
	{
	if (x <= q)
	s[x] = s1[x];
	if (x >= q)
	{
	s[x] = s2[w];
	w++;
	}
	x++;
	}


	s[x] = '\0';
	return (s);
}
