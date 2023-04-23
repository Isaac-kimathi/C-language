#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints sum of positive numbers
 * argc: number of command line arguements
 * argv: array name
 * Return: return 1 for non-integer, o otherwise
 */
int main(int argc,` char *argv[])
{
	int d, e, x, sum;
	char *f;

	if (argc > 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (d = 1; d < argc; d++)
		{
			f = argv[d];
			x = strlen(f);
			for (e = 0; e < x(f); e++)
			{
				if (isdigit(*(f + e)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(e);
	}
	printf("%d\n", sum);
	}
	return (0);
}
