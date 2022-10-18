#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
*/
void print_alphabet_x10(void)
{
	int num = 0;
	char alpha;

	while (num < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
