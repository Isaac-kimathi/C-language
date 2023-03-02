#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest - par1
 * @src - par2
 * @n - par3
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
