#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest - par 1
 * @src - par 2
 * @n - par 3
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
