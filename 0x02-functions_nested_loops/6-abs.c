#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @val: value to return its absolute value
 *
 * Return: returns an int value
 */
int _abs(int val)
{
	if (val >= 0)
		return (val);
	return (val * -1);
}
