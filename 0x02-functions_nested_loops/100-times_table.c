#include "main.h"

/**
 * print_times_table - prints times table
 * @n: times table to use
 * Return: void
 */
void print_times_table(int n)
{
	int c  = 0, x, d;

	if (n < 0 || n > 15)
		return;
	while (c <= n)
	{
		for (d = 0; d <= n; d++)
		{
			x  = c * d;
			if (d == 0)
			_putchar('0' + x);
			else if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x < 100)
			{
				_putchar(' ');
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			else
			{
				_putchar('0' + x / 100);
				_putchar('0' + (x - 100) / 10);
				_putchar('0' + x % 10);
			}
			if (d < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	c++;
}
