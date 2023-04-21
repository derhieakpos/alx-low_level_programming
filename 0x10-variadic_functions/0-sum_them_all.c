#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters
 * @n: the parameter to be summed up
 *
 * Return: 0, if n == o.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}

	return (s);

	va_end(args);
}
