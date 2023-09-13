#include "main.h"
/**
 * main -  checks for alphabetic character.
 * @c: character to check 
 *
 * Return : returns 1 if true or 0 if false
 */
int _isalpha(int c)
{
	char upper = 'A';
	char lower = 'a';

	while (upper <= 'Z')
	{
		if (upper == c)
			return (1);
		upper++;
	}
	while (lower <= 'z')
	{
		if (lower == c)
			return (1);
		lower++;
	}
	return (0);
}
