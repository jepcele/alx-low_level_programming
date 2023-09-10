#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int i = 48, j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
