#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar((y % 10) + '0');
		if (y == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
