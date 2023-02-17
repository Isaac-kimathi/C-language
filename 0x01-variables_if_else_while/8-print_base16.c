#include <stdio.h>

/**
 * main - prints the numbers in the base 16
 * Return: 0 (success)
 */
int main(void)
{
	char bc;
	int num;

	for (bc = 'a'; bc <= 'f'; bc++)
		putchar(bc);

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
