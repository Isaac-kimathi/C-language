#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloctes a memory block
 * @ptr: pointer to the previously allocated
 * @old_size: size of the allocated  space for ptr
 * @new_size: size of new memory block
 *
 * Return: pointer, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
	p = malloc(new_size);
	return (p);
	}
	else if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	else if (new_size == old_size)
	return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	if (new_size > old_size)
	n = old_size;
	for (i = 0; i < n; i++)
	p[i] = oldp[i];
	free(ptr);
	return (p);
}
