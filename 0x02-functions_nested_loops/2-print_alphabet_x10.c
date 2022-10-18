#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
*/
void print_alphabet_x10(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		num++;
	}
	_putchar('\n');
}
