#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: array a
 * @n: elements of an array
 * Return: array of string
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
