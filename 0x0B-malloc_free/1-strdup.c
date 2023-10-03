#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: NULL if str = NULL.
 * returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	
	dup = malloc(i + 1);

	if (!dup)
		return (NULL);

	j = 0;

	while (*(str + j) != '\0')
	{
		*(dup + j) = *(str + j);
		j++;
	}
	*(dup + j) = '\0';
	return (dup);
}
