#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int rev = 122;

	while (rev > 96)
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
