#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int i = 47, j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			if (i == j || i > j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\0');
	return (0);
}
