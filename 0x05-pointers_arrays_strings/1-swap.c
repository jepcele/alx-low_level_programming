#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : pointer to 1st value
 * @b : pointer to second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
