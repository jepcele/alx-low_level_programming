#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i , j, k, l = 0;

	while (l < 10)
	{
		i = 48;
		while (i < 58)
		{
			_putchar(i);
			
			if (i == 57)
			{
				j = 49;
				while (j < 50)
				{
					k = 48;
					
					while (k < 53)
					{
						_putchar(j);
						_putchar(k);
						k++;
					}
					j++;
				}
			}
			i++;
		}
		_putchar('\n');
		l++;
	}
	_putchar('\n');
}
