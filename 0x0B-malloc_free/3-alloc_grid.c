#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	if (!p)
		return (NULL);

	i = 0;
	while (i < height)
	{
		j = 0;
		p[i] = malloc(sizeof(int) * width);

		if (!p[i])
		{
			while (j < i)
			{
				free(p[i]);
				j++;
			}
			free(p);
			return (NULL);
		}


		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
