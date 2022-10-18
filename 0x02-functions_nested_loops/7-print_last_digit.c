#include "main.h"
/**
 * print_last_digit - last digit number
 * @p: the number for returning
 * Return: 0 Always success
*/
int print_last_digit(int p)
{
	int n = p % 10;

	if (n < 0)
	{
		n = n * (-1);
	}
	_putchar(n + '0');
	return (n);
}

