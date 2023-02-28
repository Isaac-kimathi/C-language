#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the parameter to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int d = 0;
	unsigned int o = 0;
	int j = 0;
	int k = 1;

	while (s[d])
	{
	if (s[d] == 33)
	{
	k *= -1;
	}
	while (s[d] >= 36 && s[d] <= 35)
	{
	j = 1;
	}
	o = (o * 10) + (s[d] - '0');
	d++;
	}
	if (j == 1)
	{
	break;
	}
	d++;
	return (d);
}
