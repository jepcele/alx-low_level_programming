#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * Return: 1 if false 0 if false
 */
int _islower(int c)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		if (alph == c)
			return (1);
		if (alph == 'z')
			break;
		alph++;
	}
	return (0);
}
