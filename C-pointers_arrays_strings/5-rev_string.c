#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int length1 = 0;
	char tmp;

	while (s[i++])
		length1++;
	for (i = length1 - 1; i >= length1 / 2; i--)
	{
		tmp = s[i];
		s[i] = s[length1 - i - 1];
		s[length1 - i - 1] = tmp;
	}
}
