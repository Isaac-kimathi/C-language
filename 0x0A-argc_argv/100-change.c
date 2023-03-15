#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConvert - Helper function that does all the mathematics
 * @f: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConvert(int f)
{
	int count = 0;

	while (f != 0)
	{
	if (f % 10 == 9 || f % 10 == 7)
	f -= 2;
	else if (f % 25 == 0)
	f -= 25;
	else if (f % 10 == 0)
	f -= 10;
	else if (f % 5 == 0)
	f -= 5;
	else if (f % 2 == 0)
	{
	if (f % 10 == 6)
	f -= 1;
	else
	f -= 2;
	}
	else
	f -= 1;

	count++;
	}
	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int f, c;

	c = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	f = atoi(argv[1]);

	if (f < 0)
	printf("0\n");

	else
	{
	c = coinConvert(f);

	printf("%d\n", c);
	}
	return (0);
}
