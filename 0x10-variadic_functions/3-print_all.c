#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j, type, d;
	float f;
	char data[] = {'c', 'i', 'f', 's'}, c, *s;

	va_start(args, format);

	i = 0;
	while(*(format + i) != '\0')
	{
		j = 0;
		while(j < 5)
		{
			if(*(format + i) == types[j])
			{
				type = j;
				switch(type)
				{
					case 0:
						c = va_arg(args, char);
						printf("%c", c);
						break;
					case 1:
						d = va_arg(args, int);
						printf("%i", d);
						break;
					case 2:
						f = va_arg(args, float)
						printf("%f", f);
						break;
					case 3:
						s = va_arg(args, char *);
						if(!s)
						{
							printf("(nil)");
							break;
						}
						printf("%s", s);
						break;
					default
						break;
				}
			}
		}
	}
	printf("\n");
	va_end(args);

}
