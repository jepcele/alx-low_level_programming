#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: number to return its sign
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}

}
