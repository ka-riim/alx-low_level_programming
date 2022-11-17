#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters passed
 * Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
		return (sum);
	}
	return (0);
}
