#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, rev;

	while (*(s + len) != '\0')
	{
		if (*(s + len + 1) == '\0')
		{
			rev = len;

			while (rev > -1)
			{
				_putchar(*(s + rev));
				rev--;
			}

		}
		len++;
	}
	_putchar('\n');
}
