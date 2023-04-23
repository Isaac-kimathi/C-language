#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string in question
 * Return: void
 */
void puts2(char *str)
{
	int u;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (u = 0; u < x; u += 2)
	{
	_putchar(str[u]);
	}
	_putchar('\n');
}

