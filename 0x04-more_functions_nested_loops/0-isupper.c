#include "main.h"
/**
 * _isupper -  checks for uppercase character.
 * @c: character to check
 *
 * Return: returns 1 if c is uppercase
 * returns 0 otherwise
 */
int _isupper(int c)
{
	char upper = 'A';
	int boolean = 0;

	while (upper <= 'Z')
	{
		if (c == upper)
		{
			boolean = 1;
			break;
		}
		upper++;
	}
	return (boolean);
}
