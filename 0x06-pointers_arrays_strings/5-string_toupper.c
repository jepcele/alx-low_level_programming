#include "main.h"
/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase.
 * @s: string to transform
 *
 * Return: pointer to transformed string
 */
char *string_toupper(char *s)
{
	int i = 0, small, caps;

	while (*(s + i) != '\0')
	{
		small = 97;
		caps = 65;
		while (small < 123)
		{
			if (*(s + i) == small)
			{
				*(s + i) = (char)caps;
			}
			small++;
			caps++;
		}
		i++;
	}
	return (s);
}
