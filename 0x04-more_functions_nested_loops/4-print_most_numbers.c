#include "main.h"
/**
 * print_most_numbers - entry
 * Return: 0 if success
*/
void print_most_numbers(void)
{
	int x;

	x = '0';
	while (x >= '0' && x <= '9')
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
			x++;
		}
	}
	_putchar('\n');
}
