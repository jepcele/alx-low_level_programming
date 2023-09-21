#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 * @s: string to encode
 *
 * Return: char
 */
char *leet(char *s)
{
	int i = 0, j;
	char arr[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char code[5] = {'4', '3', '0', '7', '1'};

	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (*(s + i) == arr[j][0] || *(s + i) == arr[j][1])
				*(s + i) = code[j];
			j++;
		}
		i++;
	}
	return (s);
}
