#include "main.h"

/**
 * leet - a leet function
 * @l: parameter l
 * Return: a string
 */
char *leet(char *l)
{
	int a = 0, b, len = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (l[a])
	{
		b = 0;

		while (b < len)
		{
			if (l[a] == tr[b] || l[a] - 32 == tr[b])
				l[a] = trw[b];
			b++;
		}
		a++;
	}
	return (l);
}
