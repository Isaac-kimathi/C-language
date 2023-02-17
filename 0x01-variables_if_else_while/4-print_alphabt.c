#include <stdio.h>

/**
 * main - prints lowercase
 * followed by a new line, except e and q
 * Return: 0 (sucess)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'z')
			putchar(ab);
	}

	putchar('\n');

	return (0);
}
