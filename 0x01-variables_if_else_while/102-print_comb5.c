#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num, num002;

	for (num = 0; num <= 98; num++)
	{
		for (num002 = num + 1; num002 <= 99; num002++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((num002 / 10) + '0');
			putchar((num002 % 10) + '0');
			if (num == 98 && num002 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
