#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @src: memory area to copy from
 * @dest: memory area to copy to.
 * @n: number of bytes to copy from src
 *
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j;

	while (*(dest + i) != '\0')
	{
		if (*(dest + i + 1) == '\0')
		{
			j = 0;

			while (j < n)
			{
				*(dest + i + 1) = *(src + j);

				if (j + 1 == n)
				{
					*(dest + i + 2) = '\0';
				}
				i++;
				j++;
			}
		}
		i++;
	}
	return (dest);
}
