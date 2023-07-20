#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - entry point
 * @format: char
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	double f;
	char *s;
	int x = 0;
	int count = 0;
	int flag = 0;
	const char *ptr = format;
	va_list ap;

	va_start(ap, format);

	while (*ptr)
	{
		count++;
		ptr++;
	}

	while (x < count)
	{
		switch (format[x])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				flag = 1;
				break;

			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				flag = 1;
				break;

			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				flag = 1;
				break;

			case 's':
				s = va_arg(ap, char *);

				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				flag = 1;
				break;

			default:
				flag = 0;
				break;
		}
		if (flag && x < count - 1)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(ap);
}
