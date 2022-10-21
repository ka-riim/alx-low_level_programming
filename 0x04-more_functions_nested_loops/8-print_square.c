#include "main.h"
/**
 * print_square - makes a square
 * @size: place holder for size of square
*/
void print_square(int size)
{
	int x = 0, y;

	if (size > 0)
	{
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
