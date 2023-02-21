#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercas,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
		i++;
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
		}
		_putchar('\n');
		ch++
	}
}

