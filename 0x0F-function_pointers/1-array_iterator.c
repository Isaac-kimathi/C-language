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
	unsigned int i = 0;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
