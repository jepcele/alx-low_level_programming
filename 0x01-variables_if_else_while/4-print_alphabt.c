#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		if (lower == 101 || lower == 113)
		{
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);

}
