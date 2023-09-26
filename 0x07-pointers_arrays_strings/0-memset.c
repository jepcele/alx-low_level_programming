#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory
 * @b: constant byte.
 * @: first  bytes of the memory to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
	}

	return (s);
}
