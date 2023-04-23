#include "main.h"

/**
 * jack_bauer - prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int h, i, j, k;

	for (h = 0; h <= 2; h++)
	{
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 5; j++)
	{
	for (k = 0; k <= 9; k++)
	{
		if (h >= 2 && i >= 4)
			break;
		_putchar(h + 48);
		_putchar(i + 48);
		_putchar(58);
		_putchar(j + 48);
		_putchar(k + 48);
		_putchar('\n');
	}
	}
	}
	}
}
