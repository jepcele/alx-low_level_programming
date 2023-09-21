#include "main.h"
/**
 * cap_string -  function that capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int caps, small, i = 0, j, sep[10] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + i) != '\0')
	{
		caps = 65;
		small = 97;
		while (caps < 91)
		{
			while (j < 10)
			{
				if (i == 0)
					*(s + i) = (char)caps;
				if (*(s + i) == sep[j] && (*(s + i + 1) == small || *(s + i + 1) == caps))
					*(s + i + 1) = (char)caps;
				j++;
			}
			caps++;
			small++;
		}
		i++;
	}
	return (s);
}
