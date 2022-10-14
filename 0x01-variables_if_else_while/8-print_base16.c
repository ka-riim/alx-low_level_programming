#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = '0';
	char anum = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (anum <= 'f')
	{
		putchar(anum);
		anum++;
	}
	putchar('\n');
	return (0);
}
