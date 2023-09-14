#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 99)
	{
		while (i < 99)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(44);
				putchar(32);
			}
			i++;
		}
	}
	else
	{
		while (i > 97)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(44);
				putchar(32);
			}
			i--;
		}
	}
	putchar('\n');
}
