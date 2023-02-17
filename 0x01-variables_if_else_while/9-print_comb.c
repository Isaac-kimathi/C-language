#include <stdio.h>

/**
 * main - Prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 44; c < 54; c++)

		putchar(c);
	if (c != 53)
	{
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
