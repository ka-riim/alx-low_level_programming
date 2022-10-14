#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (Success)
*/
int main(void)
{
	char pal;

	pal = 'z';
	while (pal >= 'a')
	{
		putchar(pal);
		pal--;
	}
	putchar('\n');
	return (0);
}
