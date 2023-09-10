#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int i = 48, j 48 , k 48;

	while (i < 48)
	{
		while (j < 58)
		{
			while (j < 58)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		j = 48;
		k = 48;
		i++
	}
	putchar('\n');
	return (0);
}
