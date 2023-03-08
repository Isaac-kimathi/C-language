#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: string parameter
 * Return: 0 (sucess)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
