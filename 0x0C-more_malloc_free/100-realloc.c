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
	char *p; *y;
	int i;
	void *f;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);

		return (f);
	}
	if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	p = ptr;
	f = malloc(sizeof(*ptr_copy) * new_size);

	if (f == NULL)
		return (NULL);

	y = f;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		y[i] = *p++;
	}
	free(ptr);
	return (f);
}

