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
				if (i < 57 && j < 58)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
