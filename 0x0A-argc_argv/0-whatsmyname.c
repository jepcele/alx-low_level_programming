#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: interge 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
