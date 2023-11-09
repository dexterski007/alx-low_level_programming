#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function to sum arguments
 *
 * @separator: separator
 * @n: arg number
 * @...: unlimited args
 *
 * Return: nothing
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *tot;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tot = va_arg(args, char *);
		if (tot != NULL)
		printf("%s", tot);
		else
		printf("nil");
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
