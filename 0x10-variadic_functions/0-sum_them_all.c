#include <stdarg.h>

/**
 * sum_them_all - function to sum arguments
 *
 * @n: arg
 * @...: unlimited args
 *
 * Return: 0 if 0 n if n
**/

int sum_them_all(const unsigned int n, ...)

{
	int tot = 0, i = 0;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tot += va_arg(args, int);
	}
	va_end(args);

	return (tot);
}
