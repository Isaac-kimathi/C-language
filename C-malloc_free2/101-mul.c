#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - loks to whether the string consists of digits
 * @argv: pointer to current item in argument
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *argv)
{
	int l;

	l = 0;
	while (argv[l])
	{
	if (argv[l] >= '0' && argv[l] <= '9')
	l++;
	else
	return (1);
	}
	return (0);
}
/**
 * _atoi - converts a string of ascii digits to the values they represent
 * @s: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *s)
{
	int l, result;

	l = result = 0;
	while (s[l])
	{
	if (s[l] >= '0' && s[l] <= '9')
	{
	result *= 10;
	result += (s[l] - '0');
	}
	l++;
	}
	return (result);
}
/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int l;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	for (l = 1; l < argc; l++)
	{
	if (_isdigit(argv[l]))
	{
	printf("Error\n");
	exit(98);
	}
	}
	return (0);
}
