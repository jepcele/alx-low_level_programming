#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, type[] = {'c', 'i', 'f', 's'};
	int i, digit, j, choice, character;
	double flt;

	va_start(args, format);

	i = 0;
	while (*(format + i) != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (*(format + j) == type[j])
			{
				choice = j;

				switch(choice)
				{
					case 0:
						character = va_arg(args, char);
						printf("%c", character);
						break;
					case 1:
						digit = va_arg(args, int);
						printf("%i", digit);
						break;
					case 2:
						flt = va_arg(args, float);
						printf("%f", flt);
						break;
					case 3:
						str = va_arg(args, char *);
						if (!str)
						{
							printf("(nil");
							break;
						}
						printf("%s", str);
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
