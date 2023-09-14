#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num != 50 || num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
