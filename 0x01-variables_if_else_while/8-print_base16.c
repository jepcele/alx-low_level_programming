#include <stdio.h>
/**
 * main - program that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int nums = 48, characts = 97;

	while (nums < 58)
	{
		putchar(nums);
		nums++;
	}
	while (characts < 103)
	{
		putchar(characts);
		characts++;
	}
	putchar('\n');
	return (0);
}
