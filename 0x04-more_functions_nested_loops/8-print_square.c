#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
