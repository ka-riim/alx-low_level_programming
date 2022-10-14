#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y;

	y = 0;
	while (y < 100)
	{
		putchar((y / 10) + '0');
		putchar((y % 10) + '0');
		if (y < 99)
		{
			putchar(',');
			putchar(' ');
		}
		y++;
	}
	putchar('\n');
	return (0);
}
