#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to find its length
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len++;
	return (len + _strlen_recursion(s + len));
}
