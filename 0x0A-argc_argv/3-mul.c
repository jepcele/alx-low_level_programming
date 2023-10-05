#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0, val1 = 0, val2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		sum = val1 * val2;
		printf("%d\n", sum);
	}
	return (0);
}
