#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: given number to find its factorial
 *
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
	int sum = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		sum += n * factorial(n - 1);
	return (sum);
}
