#include <stdio.h>
/**
 * main - Entry
 * Return: 0 Always (Success)
*/
int main(void)
{
	int num 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		numm++;
	}
	putchar('\n');
	return (0);
}
