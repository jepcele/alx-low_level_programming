#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of array elements
 * @size: size of each of the array elements
 *
 * Return:  a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	while (i < nmemb)
	{
		*(p + i) = 0;
		i++;
	}
	return ((void *)p);
}
