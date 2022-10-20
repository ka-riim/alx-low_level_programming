#include "main.h"
/**
 * print_line - entry
 * @n: place holder
*/
void print_line(int n)
{
	int p;

	if (n > 0)
	{
		p = 0;
		while (p < n)
		{
			_putchar('_');
			p++;
		}
	}
	_putchar('\n');
}
