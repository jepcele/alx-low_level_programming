#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int asc = 97;

	while (asc < 123)
	{
		putchar(asc);
		asc++;
	}
	putchar('\n');
	return (0);
}
