#include <stdio.h>
/**
 * main -  prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 * 
 * Return: 0
 */
int main(void)

	int nums = 48;

	while (nums < 58)
	{
		putchar(nums);
		nums++;
	}
	putchar('\n');
	return (0);
}
