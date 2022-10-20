#include "main.h"
/**
 * print_diagonal - entry point
 * @n: place holder
*/
void print_diagonal(int n)
{
	int p;
	int b;

	if (n > 0)
	{
		p = 0;
		while (p < n)
		{
			b = 0;
			while (b < p)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			p++;
		}
	}
	_putchar('\n');
}
