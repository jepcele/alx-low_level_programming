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
	while (i < 99)
	{
		printf("%d", i);
		if (i < 98)
		{
			putchar(44);
			putchar(32)
		}
		i++;
	}
}
