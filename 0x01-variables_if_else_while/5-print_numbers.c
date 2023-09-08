#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int letter = 48;

	while (letter < 58)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
