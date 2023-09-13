#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @val: value to prints its last digit
 *
 * Return: last digit value
 */
int print_last_digit(int val)
{
	int lastdigit;
	if (val < 0)
	{
		val  = val * -1;
	}
	lastdigit = val % 10;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
