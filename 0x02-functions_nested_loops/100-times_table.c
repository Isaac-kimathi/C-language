#include "main.h"

/**
 * print_times_table - prints times table
 * @n: times table to use
 * Return: void
 */
void print_times_table(int n)
{
	int c  = 0, x, d;

	if (n > 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);
		for (d = 1; d <= n; d++)
		{
		x = c * d;
		{
			_putchar(44);
			_putchar(32);
		if (x <= 9)
		{
			_putchar(32);
			_putchar(32);
			_putchar(x + 48);
		}
		else if (x <= 99)
		{
			_putchar(32);
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		else
		{
		_putchar(((x / 10) % 10) + 48);
		_putchar((x % 10) + 48);
		}
		}
		_putchar('\n');
		}
		}
	}
}
