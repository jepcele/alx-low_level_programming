#include "main.h"
/**
 * _strncat - that concatenates two strings
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes to copy from src
 *
 * Return: pointer to dest
 */
 char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
	{
		if(*(dest + i + 1) == '\0')
		{
			while (j < n)
			{
				if (*(src + n) == '\0')
				{
					*(dest + i + 1) = *(src + j);
					if (*(src + j + 1) == *(src + n))
						*(dest + i + 2) = '\0';
				}
				j++;
			}
		}
		i++;
	}
	return (dest);
}
