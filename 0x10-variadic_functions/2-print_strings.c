#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *words;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			words = va_arg(ap, char *);
			if (words == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", words);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
