#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}