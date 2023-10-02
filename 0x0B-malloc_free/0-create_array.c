#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr_of_chars = NULL;
	unsigned int i;

	arr_of_chars = malloc(size);

	if (!arr_of_chars)
		return (NULL);


	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			*(arr_of_chars + i) = c;
			i++;
		}
	}
	return (arr_of_chars);
}
