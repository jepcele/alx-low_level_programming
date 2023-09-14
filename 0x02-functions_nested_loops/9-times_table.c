#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * return: 0
 */
void times_table(void)
{
	int i = 0, j, prod;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			prod = i * j;
			if (i < 9)
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
