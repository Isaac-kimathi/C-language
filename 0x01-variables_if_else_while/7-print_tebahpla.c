#include <stdio.h>

/**
 * main -  print lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char ux;

	for (ux = 'z'; ux >= 'a'; ux--)
		putchar(ux);

	putchar('\n');

	return (0);
}
