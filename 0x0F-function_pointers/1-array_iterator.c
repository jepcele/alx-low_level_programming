#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array to loop through
 * @size: size of the array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
