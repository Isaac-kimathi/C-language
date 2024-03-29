#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - checks if a number is equal to 98
 * @s: integer to check
 *
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s ,ops[i].op) == 0)
		return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
