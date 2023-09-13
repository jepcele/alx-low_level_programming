#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			if ( alph == 'z')
				break;
			alph++;
		}
		_putchar('\n');
	}
}
