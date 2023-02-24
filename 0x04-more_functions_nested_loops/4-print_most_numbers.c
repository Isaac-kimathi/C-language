#include "main.h"

/**
 * print_most_numbers - prints numbers (0 through 9).
 * Return : Always 0.
 */
void print_most_numbers(void);
{
	int ch;

for (ch = 48; ch < 58; ch++)
{
if (ch != 52 && ch != 54)
{
_putchar(ch);
}
}
_putchar('\n');
}
