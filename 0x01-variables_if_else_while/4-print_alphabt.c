#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	char y;

	y = 'a';
	while (y <= 'z')
	{
		if (y != 'q' && y != 'e')
		{
			putchar(y);
		}
		y++;
	}
	putchar('\n');
	return (0);
}
