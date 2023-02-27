#include "main.h"
#include <string.h>

/**
 * print_rev - printing of a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int e, f;

	f = strlen(s);
	for (e = f - 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
