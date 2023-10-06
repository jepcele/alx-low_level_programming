#include <stdblib.h>
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
	int i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2)
	{}

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	p = malloc(i + n);

	if (!p)
		return (NULL);

}
