#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *p;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);
		if (!p)
			printf("nil");
		else
			printf("%s", p);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
