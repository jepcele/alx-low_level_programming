#include "main.h"
/**
 * main - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 48, j, k, l;

	while (i < 51)
	{
		j = 48;
		while (j < 52)
		{
			k = 48;
			while ( k < 54)
			{
				l = 48;
				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(k);
					_putchar(l);
					_putchar('\0');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
