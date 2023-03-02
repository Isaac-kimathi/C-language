#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes string using rot13
 * @x: pointer to string params
 *
 * Return: *x
 */

char *rot13(char *x)
{
	int e;
	int f;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; x[e] != '\0'; e++)
	{
		for (f = 0; f < 52; f++)
		{
			if (x[e] == data1[f])
			{
				x[e] = datarot[f];
				break;
			}
		}
	}
	return (x);
}
