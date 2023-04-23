#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dim array 0f integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int h, w;

	if (width <= 0 || height <= 0)
	return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
	return (NULL);

	for (h = 0; h < height; h++)
	{
	x[h] = malloc(sizeof(int) * width);

	if (x[h] == NULL)
	{
		for (; h >= 0; h--)
		free(x[h]);
		free(x);
		return (NULL);
	}
	}

	for (h = 0; h < height; h++)
	{
	for (w = 0; w < width; w++)
		x[h][w] = 0;
	}
	return (x);
}
