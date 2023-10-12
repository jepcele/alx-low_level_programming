#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: total params
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int sum = 0, i;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for(i = 0 ; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
