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
		putchar('\n');
		asc++;
	}
	return (0);
}
