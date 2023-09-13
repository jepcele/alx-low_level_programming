#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @val: value to prints its last digit
 *
 * Return: last digit value
 */
int print_last_digit(int val)
{
	_putchar(val%10);
	return (val % 10);
}
