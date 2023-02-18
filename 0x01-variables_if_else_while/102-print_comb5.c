#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a,c;

	for (a = 0; a <= 98; a++)
		putchar((a / 10) + '0');
	        putchar((a % 10)n + '0');
	for (c = 0; c <= 99; c++)
	putchar((c / 10) + '0');
	putchar((c % 10) + '0');
	putchar(' ');
	if (a == 98 && c == 99)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
