#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @val: value to prints its last digit
 *
 * Return: last digit value
 */
int print_last_digit(int val)
{
	if (val < 0)
	{
		val = val * -1;
		_putchar('0' + (val % 10));
	}
	else
	{
		_puctchar(val);
	}
	return (val % 10);
}
