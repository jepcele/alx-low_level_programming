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
	unsigned int i = 0;

	if (!n || !src)
		return (dest);
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
