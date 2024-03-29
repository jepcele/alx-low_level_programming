#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers.
 * @argc - argument count
 * @argv - argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0, i;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
