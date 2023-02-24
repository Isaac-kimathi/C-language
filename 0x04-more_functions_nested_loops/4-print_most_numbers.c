#include "main.h"

/**
 * print_most_numbers - prints numbers (0 through 9).
 * Return : Always 0.
 */
void print_most_numbers(void)
{
	char c;

for (c = 48; c < 58; c++)
{
if (c != 52 && c != 54)
{
_putchar(c);
}
}
_putchar('\n');
}
