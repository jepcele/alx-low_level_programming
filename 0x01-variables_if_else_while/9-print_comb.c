#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
