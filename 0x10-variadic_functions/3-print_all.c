#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;
	int flag;

	va_start(args, format);

	while (format && format[i])
	{
		flag = 1;

		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				flag = 0;
				break;
		}

		if (format[i + 1] && flag)
		{
			printf(", ");
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
