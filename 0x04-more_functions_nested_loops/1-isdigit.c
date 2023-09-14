#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: value to check
 *
 * Returneturns: Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	int num = 0;
	int boolean = 0;

	while (num < 10)
	{
		if (c == num)
			boolean = 1;
		num++;
	}
	return (boolean);
}
