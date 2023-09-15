#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: n is the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0, format, start;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while ( count < n)
		{
			format = count;
			start = 0;

			while (start < format)
			{
				_putchar(32);
				start++;
			}
			_putchar(27);
			count++;
		}
	}
	_putchar('\n');
}
