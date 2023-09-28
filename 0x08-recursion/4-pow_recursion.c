#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: power to raise the value with
 *
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		pow += x * _pow_recursion(x, y-1);
	}
	return (pow);

}
