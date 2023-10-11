#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to search through
 * @size: size of the array
 * @cmp: function to compare values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, index = -1;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
		i++;
	}

	return (index);
}
