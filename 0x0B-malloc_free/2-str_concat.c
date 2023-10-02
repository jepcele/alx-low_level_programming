#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return:  returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i + 1) == '\0')
		{
			j = 0;
			while (*(s2 + j) != '\0')
			{
				j++;
				i++;
			}
		}
		i++;
	}
	p = malloc(i);
	if (!p)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);

		j = 0;
		while (*(s2 + j) != '\0')
		{
			*(p + i) = *(s2 + j);
			i++;
			j++;
		}
		i++;
	}
}
