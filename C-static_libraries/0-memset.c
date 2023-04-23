#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;
	
	for (; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
