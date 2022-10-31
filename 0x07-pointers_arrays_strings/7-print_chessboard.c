#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: number of rows
*/
void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
