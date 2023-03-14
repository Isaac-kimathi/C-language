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

	int a, b, c, d;
	int **q;

	if (width <= 0 || height <= 0)
		return (NULL);

	q = malloc((sizeof int *) * height);
	if (q == NULL)
	{
		free(q);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		q[a] = malloc(sizeof(int) * width);
		if (q[a] = NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(q[b]);
			}
			free(q);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			q[c][d] = 0;
		}
	}
	return (q);
}
