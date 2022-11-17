#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: character to use to delimit
 * @n: the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	if (n > 0)
	{
		va_start(ap, n);
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL && x < n - 1)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
