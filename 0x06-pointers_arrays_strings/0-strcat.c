#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to copy to.
 * @src: string to copy.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
	{
		if (*(dest + i + 1) == '\0')
		{
			j = 0;
			while (*(src + j) != '\0')
			{
				*(dest + i + 1) = *(src + j);
				if (*(src + j + 1) == '\0')
				{
					*(dest + i + 2) = '\0';
				}
				j++;
				i++;
			}
		}
		i++;
	}
	return (dest);
}
