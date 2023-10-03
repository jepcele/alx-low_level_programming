#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @heigh: height of the array
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(sizeof(int) * width * height);
}
