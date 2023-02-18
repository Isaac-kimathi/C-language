#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int f, t;

	for (f = '0'; f < '9'; f++)
	putchar(f);
	for (t = f + 1; t <= '9'; t++)
	putchar(t);
	if (f != t)
	if (f == '0' && t == '9')
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
