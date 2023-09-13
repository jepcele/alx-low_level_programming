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
	char alph = 'a';

	while (i <= 10)
	{
		while (alph <='z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
