#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * return: 0
 */
void times_table(void)
{
	int i = 48, j, prod;

	while (i < 58)
	{
		j = 48;

		while (j < 58)
		{
			prod = i * j;
			_putchar(prod + '0');
			if (i < 57)
			{
				_putchar(44);
				_putchar(32);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
