#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y;
	int k = n;

	for (y = 0; y < k; y++)
	{
	dest[y] = src[y];
	}
	return (dest);
}
