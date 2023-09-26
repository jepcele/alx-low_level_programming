#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string to locate c from
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *p;
	int i = 0;
	
	p = '\0';

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			p = (s + i);
		i++;
	}
	return (p);
}
