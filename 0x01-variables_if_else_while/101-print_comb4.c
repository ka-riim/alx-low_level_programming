#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 10; b++)
			{
				if (a != b && a != c && b != c)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar((c % 10) + '0');
					if (a + b + c < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
