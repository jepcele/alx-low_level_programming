#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find its square root
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int square  = n, sqrt = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == n * n)
		return (n);
	_sqrt_recursion(n - 1);
	if (n * n == square)
		sqrt = n;

	return (sqrt);

}
