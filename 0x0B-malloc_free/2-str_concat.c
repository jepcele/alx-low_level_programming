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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (*(s1 + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	p = malloc(i + j + 1);

	if (!p)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(p + i) = *(s2 + j);
		j++;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
