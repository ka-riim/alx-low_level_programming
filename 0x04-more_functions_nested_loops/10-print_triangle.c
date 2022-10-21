#include "main.h"
/**
 * print_triangle - entry point
 * @size: size of triangle
*/
void print_triangle(int size)
{
	int y, z;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (z = size; z >= 1; z--)
			{
				if (y < z)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
