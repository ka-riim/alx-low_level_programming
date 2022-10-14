#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (success)
*/
int main(void)
{
	char pal;

	pal = 'a';
	while (pal <= 'z')
	{
		putchar(pal);
		pal++;
	}
	putchar('\n');
	return (0);
}
