#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each element of an array
 * @array: input array
 * @size: size of an array
 * @action: pointer of a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL && action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
