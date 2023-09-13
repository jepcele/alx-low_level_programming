#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alp = 'a'; 

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
		if(alp == 'z')
			break;
	}
	_putchar('\n');
	return ;
}
