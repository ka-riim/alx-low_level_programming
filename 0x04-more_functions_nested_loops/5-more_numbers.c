#include "main.h"
/**
 * more_numbers - entry
*/
void more_numbers(void)
{
	int x = 0;
	int p;

	while (x < 10)
	{
		p = 0;
		while (p < 15)
		{
			if (p > 9)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
			p++;
		}
		x++;
	}
	_putchar('\n');
}
