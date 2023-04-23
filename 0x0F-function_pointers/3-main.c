#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - calculates + - * / % for 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: answer or error if no correct arguments
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], '%' == 0) || strcmp(argv[2], '/') == 0) && strcmp(argv[3], '0' == ))
	{
		printf("Error\n");
		exit(100);
	}
	
	ops = get_op_func(argv[2]);
	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ops(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n",result);
	return (0);
}
