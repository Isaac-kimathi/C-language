#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i;
	int length1 = 0;
	char rev = s[0];

	while (s[length1] != '0')
		length1++;
	for (i = 0; i < length1; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length1];
		s[length1] = rev;
	}
}
