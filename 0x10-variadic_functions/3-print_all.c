#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print all
 *
 * @format: format
 * @...: unlimited args
 *
 * Return: nothing
**/

void print_all(const char * const format, ...)
{
	char *sep = "";
	char *tab;
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
	while(format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				{
				tab = va_arg(args, char *);
				if (tab == NULL)
				tab = "(nil)";
				printf("%s%s", sep, tab);
				}
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	}
	va_end(args);
}
