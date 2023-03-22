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
	size_t i = -1;

	if (array && action)
	{
	while (i++ < size)
		action(array[i]);
	}
}
