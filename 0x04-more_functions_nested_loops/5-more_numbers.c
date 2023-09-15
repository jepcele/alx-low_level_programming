#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 48, j;

	while (i < 58)
	{
		_putchar(i);

		if (i == 57)
		{
			j = 48;

			while (j < 53)
			{
				_putchar(j);
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
