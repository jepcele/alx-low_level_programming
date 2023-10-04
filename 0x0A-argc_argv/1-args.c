#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	if (argv[0])
		printf("%i", argc);

	return (0);
}
