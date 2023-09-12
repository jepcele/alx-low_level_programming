#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					if (i == j && j == l)
					       continue;
					putchar(i);
					putchar(j);
					if (i < 57 && j < 56)
					{
						putchar(32);
					}
					putchar(k);
					putchar(l);
					if (i < 58 && j < 57)
					{
						putchar(44);
					}
					l++;
				}
				l = 48;
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
