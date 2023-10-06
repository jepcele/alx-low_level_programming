#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: fist string to concatinate to
 * @s2: string to concatinate from
 * @n: number of bytes from s2
 *
 * Return: pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
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

	if (n >= j)
		n = j;
	p = malloc(i + n);

	if (!p)
		return (NULL);
	i = 0;
	while (*(s2 + i) != '\0')
	{
		*(p + i) = *(s2 + i);
		i++;
	}
	j = 0;
	while ( j < n)
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + j) = '\0';
	return (p);

}
