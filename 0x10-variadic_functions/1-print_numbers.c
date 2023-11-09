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

void print_numbers(const char *separator, const unsigned int n, ...)

{
	int tot = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
		tot = va_arg(args, int);
		printf("%d", tot);
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
