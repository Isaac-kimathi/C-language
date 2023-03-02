#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @l: string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *l)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int len = 13;
	int i;
	int a = 0;

	while (l[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || l[a - 1] == spc[i]) && (l[a] >= 97 && l[a] <= 122))
				l[a] = l[a] - 32;
			i++;
		}
		a++;
		}
	return (l);
}
